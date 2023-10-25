// Write a JavaScript exercise to get the filename extension.  

const prompt = require("prompt-sync")({sigint : true});

let fileName  = prompt("Enter the file Name : ")

let extensionName = fileName.split('.').pop()
console.log(`The extension of the inputted file is ".${extensionName}"`);