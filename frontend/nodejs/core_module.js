const path = require('path');

console.log(__dirname); // it will written folder name

console.log(__filename); // it written folder name with file name

console.log(path.basename(__dirname)); // it  will written the current folder
console.log(path.extname(__filename)); // witen file extension name
console.log(path.isAbsolute(__filename)); // it will written true if file path is absolute

console.log(path.join("../dist/" + __dirname)); //  it is use to combile two different path
