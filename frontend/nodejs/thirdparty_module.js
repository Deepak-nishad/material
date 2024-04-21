var validator = require('validator');

console.log(validator.isEmail('foo@bar.com'))
console.log(validator.isEmail('fooar.com'))
console.log(validator.isEmail('foo@barcom'))