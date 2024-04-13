from fastapi import FastAPI, HTTPException, Body, Request
import google.generativeai as genai

app = FastAPI()
genai.configure(api_key=GOOGLE_API_KEY)
model = genai.GenerativeModel(
    "models/gemini-1.5-pro-latest",
    system_instruction="You will be displaying a Mixamo type animation on a screen. This is a very simple animation, so give very short and concise notes on what is happening/what will happen",
)
@app.post("/generate_text/")
async def generate_text(text: str = Body(..., embed=True)):
    try:  
        response = model.generate_content("Shoot a basketball")
        return {"response": response.text}
    except Exception as e:
        raise HTTPException(status_code=500, detail=str(e))
    