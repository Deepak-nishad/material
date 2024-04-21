const express = require('express')
const app = express()
require("dotenv").config();
const bodyParser = require('body-parser')
app.use(bodyParser.urlencoded({ extended: false }))

// parse application/json
app.use(bodyParser.json())

const host = process.env.Host;
const port = process.env.Port

const uid = process.env.USERID;
const password = process.env.PASSWORD;

app.get('/', (req, res, next) => {
    res.send('this is simple get request')
})

app.post('/product', (req, res, next) => {
    res.setHeader('Content-Type', 'text/plain')
    const data = {
        pname: req.body.pname,
        price: req.body.price,
        company: req.body.company
    }
    res.send(data);

})

app.put('/product', (req, res, next) => {
    res.send('this is simple put request product request')
})


app.delete('/product', (req, res, next) => {
    res.send('this is simple delete product request')
})




app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})
