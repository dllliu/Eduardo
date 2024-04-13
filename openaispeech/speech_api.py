from fastapi import FastAPI, HTTPException, Body
from openai import OpenAI
from IPython.display import Audio, display

app = FastAPI()
client = OpenAI(api_key=API_KEY)

@app.post("/generate_audio/")
async def generate_audio(text: str = Body(..., embed=True)):
    try:
        # Generate audio
        response = client.audio.speech.create(
            model="tts-1",
            voice="alloy",
            input=text
        )

        file_name = 'speech.wav'
        response.stream_to_file(file_name)
        audio_link = Audio(file_name, autoplay=False)._repr_html_()

        return {"audio_link": audio_link}
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))