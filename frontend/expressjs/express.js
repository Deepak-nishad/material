const express = require('express')
const app = express()
require("dotenv").config();
const prompt = require('prompt');


prompt.start();

const host = process.env.Host;
const port = process.env.Port

const uid = process.env.USERID;
const password = process.env.PASSWORD;

app.get('/', (req, res, next) => {
    res.send('Hello World!')
})

app.get('/about', (req, res, next) => {
    res.sendFile(__dirname + '/about.html')
})

app.get('/*', (req, res, next) => {
    res.sendFile(__dirname + '/404.html')
})


prompt.get(['username', 'password'], function (err, result) {


    if (result.username == uid && result.password == password) {
        app.listen(port, () => {
            console.log(`Example app listening on port ${port}`)
        })
    }
    else {
        console.log("wrong credinal")
    }
});