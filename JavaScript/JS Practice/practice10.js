//Write a JavaScript program to get the difference between a given number and 13, if the number is broader than 13 return double the absolute difference.
const prompt = require("prompt-sync")({ sigint: true });
let userInput = Number(prompt("Enter a number : "));

if (userInput <= 13) {
  console.log(`The diff b/w user given number and 13 is ${userInput - 13}`);
} else {
  console.log(
    `double the absolute difference is ${Math.abs(userInput - 13) * 2}`
  );
}
