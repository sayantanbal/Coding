//42. Write a JavaScript program to check whether three given numbers are increasing in strict or in soft mode.
//Note: Strict mode -> 10, 15, 31 : Soft mode -> 24, 22, 31 or 22, 22, 31

function isStrictorSoftModeInc(num1, num2, num3) {
  if (num1 < num2 && num2 < num3)
    console.log("Three numbers are strictly inc.");
  else if ((num1 >= num2 && num2 < num3) || (num1 < num2 && num2 <= num3))
    console.log("Three numbers are softly inc.");
  else if (num1 === num2 && num2 === num3)
    console.log("Three numbers are same");
  else console.log("Three numbers are not inc.");
}

const prompt = require("prompt-sync")({ sigint: true });
console.log("You have to enter 3 numbers");
let userInput1 = Number(prompt("Enter 1st number "));
let userInput2 = Number(prompt("Enter 2nd number "));
let userInput3 = Number(prompt("Enter 3rd number "));

isStrictorSoftModeInc(userInput1, userInput2, userInput3);
