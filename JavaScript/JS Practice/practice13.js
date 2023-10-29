//Write a JavaScript program to create a new string from a given string by changing the position of the first and last characters. The string length must be broader than or equal to 1.


const prompt = require("prompt-sync")({sigint : true});
let userInputStr =  prompt("Enter a word ");


// userInputStr[0] = userInputStr[0]^userInputStr[userInputStr.length]
// userInputStr[userInputStr.length] = userInputStr[0]^userInputStr[userInputStr.length]
// userInputStr[0] = userInputStr[0]^userInputStr[userInputStr.length]


let x = userInputStr.trim().charCodeAt(0)
let y = userInputStr.trim().charCodeAt(userInputStr.trim().length-1)

// JS can't do bit operation more than 32 bits as of now so you have to always break chuncks of string to make sure your code works.
// console.log(x, y);

x = x^y
y = x^y
x = x^y

// console.log(x, y);

let char0 = String.fromCharCode(x)
let charl = String.fromCharCode(y)

// console.log(x + userInputStr.trim().substring(1,userInputStr.length-1) + y);
console.log(char0 + userInputStr.trim().substring(1,userInputStr.length-1) + charl);



// userInputStr[0] = x
// userInputStr[userInputStr.length] = y


// console.log(userInputStr);

