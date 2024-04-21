const http = require("http");


// let server = http.createServer((req, res) => {
//     res.write("Server created successfully")
//     res.end();
// })

// server.listen(5555, (req, res) => {
//     console.log("server started ")

// })


let server = http.createServer((req, res) => {


    if (req.url == "/") {
        res.write("This is home page")
        res.end();
    }

    if (req.url == "/about") {
        res.write("This is about page")
        res.end();
    }

    if (req.url == "/contact") {
        res.write("This is contact page")
        res.end();
    }
    if (req.url == "/service") {
        res.write("This is service page")
        res.end();
    }

})

server.listen(5555, () => {
    console.log("server started successfully")
})

