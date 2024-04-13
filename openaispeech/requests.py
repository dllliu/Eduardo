import requests

# URL of your FastAPI endpoint
url = "http://127.0.0.1:8000/generate_audio/"

# Text to be converted to audio
text = "Hello, this is a test."

# Sending POST request
response = requests.post(url, json={"text": text})

# Printing the response
print(response.json())