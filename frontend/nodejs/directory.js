const fs = require('fs');

// fs.unlink('writefile2.txt', (err, data) => {
//     console.log("file remove successfuly")
// })

// HOW TO create directory chrounsly

// fs.mkdir("newdir", (err, data) => {
//     console.log("directory created successfuly")
// })

fs.rmdir("newdir", (err, data) => {

    fs.writeFile("newDir/newwritefile.txt", "welcome stayajeet bero", (err, data) => {
        console.log("new file and directory created succesfult")
    })
});


// fs.mkdir("newdir", (err, data) => {
//     console.log("directory created successfuly")
//     fs.rmdir("newdir", (err, data) => {

//         fs.writeFile("newdir/newwritefile.txt", "welcome stayajeet bero", (err, data) => {
//             console.log("new file and directory created succesfult")
//         })
//     })
// })
