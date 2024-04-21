// module : - it contain single or multiple js file which has specific use
// in case if you want to send data from one file to another for that we use "export" keyword
// if you want access data from another file to you file for that we use "import" keyword


import { add, myname } from "./external.mjs"
// import { Result } from "./gree2.mjs";
import Result from "./gree2.mjs";

console.log(myname);
console.log(add(-20, 56));
let resultobj = new Result("Deepak", 91, 89, 96);
resultobj.Result();