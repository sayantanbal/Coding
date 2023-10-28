//Write a JavaScript program to create a new string from a given string by changing the position of the first and last characters. The string length must be broader than or equal to 1.


const prompt = require("prompt-sync")({sigint : true});
let userInputStr =  prompt("Enter a word");


// userInputStr[0] = userInputStr[0]^userInputStr[userInputStr.length]
// userInputStr[userInputStr.length] = userInputStr[0]^userInputStr[userInputStr.length]
// userInputStr[0] = userInputStr[0]^userInputStr[userInputStr.length]


let x = userInputStr[0]
let y = userInputStr[userInputStr.length]


x = x^y
y = x^y
x = x^y


userInputStr[0] = x
userInputStr[userInputStr.length] = y


console.log(userInputStr);

work due!