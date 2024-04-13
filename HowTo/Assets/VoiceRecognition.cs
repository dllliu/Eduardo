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

public class VoiceRecognition : MonoBehaviour
{
    [SerializeField] private Button startButton;
    [SerializeField] private Button stopButton;
    [SerializeField] private TextMeshProUGUI text;

    //Environment.GetEnvironmentVariable("MY_API_KEY");
    private string apiKey = "";
    private string input = "";
    private AudioClip clip;
    private byte[] bytes;
    private bool recording;

    private void Start()
    {
        startButton.onClick.AddListener(StartRecording);
        stopButton.onClick.AddListener(StopRecording);
        stopButton.interactable = false;
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
        string url = "https://generativelanguage.googleapis.com/v1beta/models/gemini-1.5-pro-latest:generateContent";
        string finalUrl = $"{url}?key={apiKey}";
        string systemPrompt = "You are an expert topic finder. The user will ask a question or just ask about a subject. Just return the topic of the question (1-2 words).\ninput: How to swim?\noutput: swimming\ninput: Show me a baseball swing\noutput: baseball swing\ninput: CPR\noutput: CPR\ninput: Show me how to run\noutput: running\ninput: How to dance\noutput: dances\ninput: sleep\noutput: sleep\ninput: giving a presentation\noutput: presentation\ninput: i really like this song I heard\noutput: listening to music\ninput: how to play guitar\noutput: playing guitar";
        string json = $@"
    {{
        ""system_instruction"": {{
            ""parts"": [
                {{ ""text"": ""{systemPrompt}"" }}
            ]
        }},
        ""contents"": {{
            ""parts"": [
                {{ ""text"": ""{input}"" }}
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
                //Debug.Log("Response: " + webRequest.downloadHandler.text);
                string responseText = webRequest.downloadHandler.text;
                ResponseData response = JsonUtility.FromJson<ResponseData>(responseText);
                Debug.Log(response.candidates[0].content.parts[0].text);
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
