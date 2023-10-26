//Write a JavaScript exercise to create a variable using a user-defined name.



const prompt = require("prompt-sync")({sigint : true});

let userDefinedVar = prompt("Enter the Variable Name you want to enter : ")
let abc = 10;
this[userDefinedVar] = abc

console.log(`previous variable name was "abc" and the value was "${abc}" changed to user given variable name, "${userDefinedVar}" and the value is "${this[userDefinedVar]}"`);