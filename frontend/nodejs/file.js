const fs = require('fs');

// read and write file synchrounsly

fs.writeFileSync("writefileeee.txt", "how are you all");

let data = fs.readFileSync("writefileeee.txt", "utf-8");

// console.log(data);

fs.readFile("writefileeee.txt", "utf-8", (err, rdata) => {
    console.log(rdata);

    fs.writeFile("writefile2.txt", rdata, (err, data) => {
        console.log("write opeartion is succesfully")
    })


    fs.appendFile("writefile2.txt", ", we al are fine", (err, data) => {
        console.log("append opeartion is done succesfuly");
    })

})