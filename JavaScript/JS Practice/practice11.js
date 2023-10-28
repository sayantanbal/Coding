//  21. Write a JavaScript program to create another string by adding "Py" in front of a given string. If the given string begins with "Py" return the original string.

const prompt = require("prompt-sync")({sigint : true});
let userInputStr =  prompt("Give a word");



if (userInputStr.trim().includes("Py")) { // .includes() is case sensitive.
    console.log(userInputStr.trim());
}
else
{
    console.log("Py" + userInputStr.trim());
}