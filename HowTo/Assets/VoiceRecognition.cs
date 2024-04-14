using System.IO;
using HuggingFace.API;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using Amazon.Polly;
using Amazon.Runtime;
using Amazon.Polly.Model;
using Amazon;
using System.Threading.Tasks;

[System.Serializable]
public class ResponseData
{
    public List<Candidate> candidates;
}

[System.Serializable]
public class Candidate
{
    public Content content;
}

[System.Serializable]
public class Content
{
    public List<Part> parts;
    public string role;
}

[System.Serializable]
public class Part
{
    public string text;
}

[System.Serializable]
public class RootObject
{
    public Embedding embedding;
}

[System.Serializable]
public class Embedding
{
    public float[] values;
}

[System.Serializable]
public class VectorResponse
{
    public Result[] results;
    public Match[] matches;
    public Usage usage;
}

[System.Serializable]
public class Result
{
    // Define properties if results array will contain elements
}

[System.Serializable]
public class Match
{
    public string id;
    public float score;
    public object[] values; // Using object assuming values could be any type
    public Metadata metadata;
}

[System.Serializable]
public class Metadata
{
    public string title;
}

[System.Serializable]
public class Usage
{
    public int readUnits;
}

public class Description
{
    public string response;
}

public class VoiceRecognition : MonoBehaviour
{
    [SerializeField] private Button startButton;
    [SerializeField] private Button stopButton;
    [SerializeField] private TextMeshProUGUI text;

    [SerializeField] private TextMeshProUGUI error_text;

    public ARObjectSpawner spawner;
    public AudioImporter importer;

    //Environment.GetEnvironmentVariable("MY_API_KEY");
    //private string apiKey = "";

    //private string PINECONE_API_KEY = "";
    // private string INDEX_HOST = "";

    // private string AWS_KEY = "";
    // private string AWS_SECRET = "";
    // string GOOGLE_API_KEY2 = "";

    // string GOOGLE_API_KEY = "";
    private string input = "";
    private AudioClip clip;
    private byte[] bytes;
    private bool recording;

    public AudioSource narration;

    private async void Start()
    {
        startButton.onClick.AddListener(StartRecording);
        stopButton.onClick.AddListener(StopRecording);
        stopButton.interactable = false;
    }

    private async void SynthesizeSpeech(string resp)
    {
        var credentials = new BasicAWSCredentials(AWS_KEY, AWS_SECRET);
        var client = new AmazonPollyClient(credentials, RegionEndpoint.EUCentral1);
        var request = new SynthesizeSpeechRequest()
        {
            Text = resp,
            Engine = Engine.Neural,
            VoiceId = VoiceId.Aria,
            OutputFormat = OutputFormat.Mp3
        };

        var response = await client.SynthesizeSpeechAsync(request);
        WriteIntoFile(response.AudioStream);
        using (var www = UnityWebRequestMultimedia.GetAudioClip($"file://{Application.persistentDataPath}/audio.mp3", AudioType.MPEG))
        {
            var op = www.SendWebRequest();
            while (!op.isDone) await Task.Yield();
            var new_clip = DownloadHandlerAudioClip.GetContent(www);
            narration.clip = new_clip;
            narration.Play();
        }
    }

    private void WriteIntoFile(Stream stream)
    {
        using (var filestream = new FileStream($"{Application.persistentDataPath}/audio.mp3", FileMode.Create))
        {
            byte[] buffer = new byte[8 * 1024];
            int bytesRead;
            while ((bytesRead = stream.Read(buffer, 0, buffer.Length)) > 0)
            {
                filestream.Write(buffer, 0, bytesRead);
            }
        }
    }

    private void Update()
    {
        if (recording && Microphone.GetPosition(null) >= clip.samples)
        {
            StopRecording();
        }
    }

    private void StartRecording()
    {
        error_text.text = "";
        text.color = Color.white;
        text.text = "Recording...";
        startButton.interactable = false;
        stopButton.interactable = true;
        clip = Microphone.Start(null, false, 10, 44100);
        recording = true;
    }

    private void StopRecording()
    {
        var position = Microphone.GetPosition(null);
        Microphone.End(null);
        var samples = new float[position * clip.channels];
        clip.GetData(samples, 0);
        bytes = EncodeAsWAV(samples, clip.frequency, clip.channels);
        recording = false;
        SendRecording();
    }

    private void SendRecording()
    {
        text.color = Color.yellow;
        text.text = "Sending...";
        stopButton.interactable = false;
        HuggingFaceAPI.AutomaticSpeechRecognition(bytes, response =>
        {
            text.color = Color.white;
            text.text = response;
            input = response;
            startButton.interactable = true;
            StartCoroutine(SendPostRequest());
        }, error =>
        {
            text.color = Color.red;
            text.text = error;
            startButton.interactable = true;
        });
    }

    private IEnumerator SendPostRequest()
    {
        string url = "https://generativelanguage.googleapis.com/v1beta/models/gemini-1.0-pro:generateContent";
        string finalUrl = $"{url}?key={apiKey}";
        string systemPrompt = "You are an expert topic finder. The user will ask a question or just ask about a subject. Just return the topic of the question (1-2 words). If there is no topic related at all or the phrase is not completed, repeat the phrase Input Not Understood\ninput: How to swim?\noutput: swimming\ninput: Show me a baseball swing\noutput: baseball swing\ninput: CPR\noutput: CPR\ninput: Show me how to run\noutput: running\ninput: How to dance\noutput: dances\ninput: sleep\noutput: sleep\ninput: giving a presentation\noutput: presentation\ninput: i really like this song I heard\noutput: listening to music\ninput: how to play guitar\noutput: playing guitar\ninput:uh uh um\noutput: Input Not Understood\ninput:how should ... \noutput: Input Not Understood\ninput: ";
        string json = $@"
    {{
        ""contents"": {{
            ""role"": ""user"",
            ""parts"": [
                {{ ""text"": ""{systemPrompt + input}"" }}
            ]
        }}
    }}";
        input = "";

        using (UnityWebRequest webRequest = new UnityWebRequest(finalUrl, "POST"))
        {
            byte[] bodyRaw = Encoding.UTF8.GetBytes(json);
            webRequest.uploadHandler = new UploadHandlerRaw(bodyRaw);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Content-Type", "application/json");

            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.Success)
            {
                // Handle success
                ResponseData response = JsonUtility.FromJson<ResponseData>(webRequest.downloadHandler.text);
                Debug.Log(response.candidates[0].content.parts[0].text);
                string subject = response.candidates[0].content.parts[0].text;
                if (subject.Contains("Input Not Understood", StringComparison.OrdinalIgnoreCase))
                {
                    error_text.text = "Input Not Understood";
                }
                else
                {
                    StartCoroutine(VectorSearch(response.candidates[0].content.parts[0].text));
                }

            }
            else
            {
                // Handle error
                Debug.LogError("Error: " + webRequest.error);
            }
        }
    }

    private IEnumerator VectorSearch(string topic)
    {
        string url = "https://generativelanguage.googleapis.com/v1beta/models/embedding-001:embedContent";
        string finalUrl = $"{url}?key={GOOGLE_API_KEY2}";
        string json = $@"{{
        ""model"": ""models/embedding-001"",
        ""content"": {{
            ""parts"": [{{
                ""text"": ""{topic}""
            }}]
        }}
    }}";

        using (UnityWebRequest webRequest = new UnityWebRequest(finalUrl, "POST"))
        {
            byte[] bodyRaw = Encoding.UTF8.GetBytes(json);
            webRequest.uploadHandler = new UploadHandlerRaw(bodyRaw);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Content-Type", "application/json");

            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.Success)
            {
                // Handle success
                RootObject data = JsonUtility.FromJson<RootObject>(webRequest.downloadHandler.text);
                StartCoroutine(VectorQuery(data.embedding.values));

            }
            else
            {
                // Handle error
                Debug.LogError("Error: " + webRequest.error);
            }
        }
    }

    private IEnumerator VectorQuery(float[] values)
    {
        string finalUrl = $"https://{INDEX_HOST}/query";
        string json = $@"{{
        ""vector"": [{string.Join(", ", values)}],
        ""topK"": 1,
        ""includeValues"": false,
        ""includeMetadata"": true
    }}";

        using (UnityWebRequest webRequest = new UnityWebRequest(finalUrl, "POST"))
        {
            byte[] bodyRaw = Encoding.UTF8.GetBytes(json);
            webRequest.uploadHandler = new UploadHandlerRaw(bodyRaw);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Api-Key", PINECONE_API_KEY);
            webRequest.SetRequestHeader("Content-Type", "application/json");

            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.Success)
            {
                // Handle success
                VectorResponse response = JsonUtility.FromJson<VectorResponse>(webRequest.downloadHandler.text);
                if (response.matches[0].score >= .73)
                {
                    spawner.Spawn(response.matches[0].metadata.title);
                    Debug.Log(response.matches[0].metadata.title);
                    StartCoroutine(GenerateDescription(response.matches[0].metadata.title));
                }
                else
                {
                    error_text.text = "Animation not found";
                }

            }
            else
            {
                // Handle error
                Debug.LogError("Error: " + webRequest.error);
            }
        }
    }

    private IEnumerator GenerateDescription(string title)
    {
        string url = "https://generativelanguage.googleapis.com/v1beta/models/gemini-1.0-pro:generateContent";

        string finalUrl = $"{url}?key={GOOGLE_API_KEY}";
        string systemPrompt = "Moonwalk: Start with both feet side by side. Lift one foot up. Slide the other foot back until it is raised up. Repeat this process\nSwimming: Alternate the pattern of extending forward with an arm and pushing water back. Simultaneously, kick the legs to push water backwards.\nFast Run: Alternate pumping both arms while simultaneously moving both feet extremely quickly.\nBaseball Strike: Start by lifting your non throwing hand leg. Then while stepping forward with that leg, separate your arms. Finish by rotating your hips then throwing the ball.\nThrowing a Football: Step forward with your non throwing hand. Then while stepping forward with that leg, separate your arms. Finish by rotating your hips then throwing the ball.\nFishing Cast: Start by grabbing the fishing rod and getting ready to throw the rod into the water. Perform the action of throwing the rod, without releasing the rod.\nBox Jump: Bend your knees and lower your arms. Jump up onto the box while thrusting your arms up.\nHook: With your front hand, curl your hands into a fist. Then punch using a circular pattern while rotating your hips.\nGolf putt: Place your feet about shoulder width apart. With your arms on the putter, move your arms backward slightly. Then while moving the arms forward, strike the ball. Follow through for the finish.";
        string json = $@"
    {{
        ""contents"": {{
            ""role"": ""user"",
            ""parts"": [
                {{ ""text"": ""{systemPrompt + title}"" }}
            ]
        }}
    }}";

        using (UnityWebRequest webRequest = new UnityWebRequest(finalUrl, "POST"))
        {
            byte[] bodyRaw = Encoding.UTF8.GetBytes(json);
            webRequest.uploadHandler = new UploadHandlerRaw(bodyRaw);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Content-Type", "application/json");

            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.Success)
            {
                // Handle success
                ResponseData response = JsonUtility.FromJson<ResponseData>(webRequest.downloadHandler.text);
                Debug.Log(response.candidates[0].content.parts[0].text);
                string description = response.candidates[0].content.parts[0].text;
                SynthesizeSpeech(description);

            }
            else
            {
                // Handle error
                Debug.LogError("Error: " + webRequest.error);
            }
        }
    }


    private byte[] EncodeAsWAV(float[] samples, int frequency, int channels)
    {
        using (var memoryStream = new MemoryStream(44 + samples.Length * 2))
        {
            using (var writer = new BinaryWriter(memoryStream))
            {
                writer.Write("RIFF".ToCharArray());
                writer.Write(36 + samples.Length * 2);
                writer.Write("WAVE".ToCharArray());
                writer.Write("fmt ".ToCharArray());
                writer.Write(16);
                writer.Write((ushort)1);
                writer.Write((ushort)channels);
                writer.Write(frequency);
                writer.Write(frequency * channels * 2);
                writer.Write((ushort)(channels * 2));
                writer.Write((ushort)16);
                writer.Write("data".ToCharArray());
                writer.Write(samples.Length * 2);

                foreach (var sample in samples)
                {
                    writer.Write((short)(sample * short.MaxValue));
                }
            }
            return memoryStream.ToArray();
        }
    }
}
