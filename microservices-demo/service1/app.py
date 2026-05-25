from flask import Flask
import requests
import os

app = Flask(__name__)

@app.route('/')
def hello():
    return "Hello from Service 1!"

@app.route('/call-service2')
def call_service2():
    service2_url = os.getenv('SERVICE2_URL', 'http://service2:5001')
    try:
        response = requests.get(f"{service2_url}/info")
        return f"Response from Service 2: {response.text}"
    except:
        return "Could not reach Service 2"

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)