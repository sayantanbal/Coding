// let score = 33 ---> number not Number!
// let score = "33"
// let score = "33abc"
// let score = null;  // null converted into Number gives 0.
// let score = undefined --> converted to Number gives NaN => Not a Number. It's type is a number.
// true => 1, false => 0.


// console.log(typeof score);
// // console.log(typeof(score));


// let valueInInt = Number(score);
// console.log(typeof(valueInInt));


// console.log(valueInInt);



// let isLoggedIn = ""; when converted to boolean gives false.
// let isLoggedIn = "        "; //  but when some characters are added inside and then converted to boolean gives true.
// let booleanisLoggedIn = Boolean(isLoggedIn);
// console.log(booleanisLoggedIn);


let someNumber = 33;
let stringNumber = String(someNumber);
// console.log(stringNumber);  
console.log(typeof stringNumber);