from flask import Flask, send_from_directory, Response

app = Flask(__name__)

@app.route('/')
@app.route('/<path:path>')
def index(path='index.html'):
    resp = send_from_directory('static', path)
    resp.headers['Source-Control-Management-Type'] = 'Mercurial-SCM'
    return resp

@app.errorhandler(404)
def page_not_found(e):
    return send_from_directory('static', '404.html')

app.run(host='0.0.0.0', port=8080)
