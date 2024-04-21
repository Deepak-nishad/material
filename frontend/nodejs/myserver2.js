const http = require("http");
const fs = require("fs");
const prompt = require('prompt');
require("dotenv").config();


prompt.start();

const host = process.env.Host;
const port = process.env.Port

const uid = process.env.USERID;
const password = process.env.PASSWORD;



let server = http.createServer((req, res) => {

    if (req.url == "/" || req.url == "/home") {

        // let myReader = fs.createReadStream(__dirname + "/index.html", "utf-8");
        let myReader = fs.createReadStream(__dirname + "/background.html", "utf-8");
        res.writeHead(200, { "content-type": "text/html" })
        myReader.pipe(res);

        // res.write("This is home page")
        // res.end();
    }

    if (req.url == "/about") {

        let myReader = fs.createReadStream(__dirname + "/about.html", "utf-8");

        myReader.pipe(res);

        // res.write("This is about page")
        // res.end();
    }

    if (req.url == "/contact") {
        let myReader = fs.createReadStream(__dirname + "/contact.html", "utf-8");
        myReader.pipe(res);

        // res.write("This is contact page")
        // res.end();
    }
    if (req.url == "/service") {



        let myReader = fs.createReadStream(__dirname + "/service.html", "utf-8");
        myReader.pipe(res);
        // res.write("This is service page")
        // res.end();
    }
});



prompt.get(['username', 'password'], function (err, result) {
    //
    // Log the results.
    //
    if (result.username == uid && result.email == password) {
        server.listen(port, (req, res) => {
            console.log(`server started on ${host} and ${port} `)

        })
    }
    else {
        console.log("wrong credinal")
    }
});