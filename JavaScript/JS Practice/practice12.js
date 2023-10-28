//22. Write a JavaScript program to remove a character at the specified position in a given string and return the modified string.


const prompt = require("prompt-sync")({sigint : true});

let userInputStr =  prompt("Enter a sentence : ");
let userSpecificPos = Number(prompt("Enter position : "))


let Strpart1 = userInputStr.substring(0,userSpecificPos-1)
let Strpart2 = userInputStr.substring(userSpecificPos+1,userInputStr.length)

console.log(Strpart1+Strpart2);