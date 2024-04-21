
// ES5 - 2009 || es6 - 2015  https://www.odinschool.com/blog/programming/java-script-versions

let course = ["react", "Angular", "java", "python", "nodejs"];

// foreach(): it call another method once only for each element

// course.forEach((val, index) => {
//     console.log(val, index)
// }
// )



let num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
console.log(num);

// map() :- it call another method once only for each element  and it return new array after performing manupulation with array data 

// let mapoutput = num.map((val, index) => {
//     return val * 5;

// })
// filter() - : it call another method once only for each element  and it return new array of those element who satisfy given condition

// let filteroutput = num.filter((val) => {
//     // return val > 5 && val < 15
//     return val % 2 == 0
// })

// console.log(filteroutput)

// every() :- it call another method once for each element and it return true value if all array values satisfy given condition

// let every_output = num.every((val) => {
//     return val > 10;
// })
// console.log(every_output)

// some() :-it call another method once for each element and it return true value if some array values satisfy given condition

// let someout = num.some((val) => {
//     return val > 19
// })
// console.log(someout)


// reduce/ reduceRight : - it return array as single value, it take two parameter, 1, pre, 2. next
let reducew = num.reduce((prev, next) => {
    return prev + next;
})

console.log(reducew);



