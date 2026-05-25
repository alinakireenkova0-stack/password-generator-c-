from flask import Flask
import datetime

app = Flask(__name__)

@app.route('/')
def home():
    return "Service 2 is running!"

@app.route('/info')
def info():
    return f"Service 2 info: {datetime.datetime.now()}"

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5001)



