// normal function
// function add(num1, num2) {
//     return num1 + num2
// }

// arrow function
const add = (num1, num2) => {
    return num1 + num2
}

const sub = (num1, num2) => {
    return num1 - num2
}

const multi = (num1, num2) => {
    return num1 * num2
}

const divide = (num1, num2) => {
    return num1 / num2
}

module.exports = { add, sub, multi, divide };

// console.log(add(20, 30))
// console.log(sub(20, 30))
// console.log(multi(20, 30))
// console.log(divide(30, 20))