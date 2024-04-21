const express = require("express");
const path = require('path');
require('dotenv').config();
const app = express();

const port = process.env.PORT
const host = process.env.HOST

// file path for accessing static data 
app.use(express.static(__dirname + "/public"))

// file path for templates
const viewpath = path.join(__dirname, "/template/views")

app.set('view engine', 'hbs');
app.set('views', viewpath);


app.get("/", (req, res, next) => {
    // res.send("simple request");

    res.render("index", {
        title: "This is Home Page",
        author: "deepak",
        company: "Hematite Infotext pvt ltd"
    })
});

app.get("/contact", (req, res, next) => {


    // res.send("simple request contatc");

    res.render("contact", {
        title: "This is contact Page",
        author: "deepak",
        company: "Hematite Infotext pvt ltd"
    })

})



app.get("/about", (req, res, next) => {
    // res.send("simple request about");
    res.render("about", {
        title: "This is about Page",
        author: "deepak",
        company: "Hematite Infotext pvt ltd"
    })
})

app.get("/*", (req, res, next) => {
    res.send("simple request for not found");
})

app.listen(port, () => {
    console.log(`server started ${port} and host name is :${host}`)
})