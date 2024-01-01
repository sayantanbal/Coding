// generate random number

const prompt = require("prompt-sync")({sigint : true});

let radomNum;
radomNum = Math.floor(Math.random() * 100 + 1);
console.log(radomNum);

let maxTry = 10;

while (maxTry !== 0) {
  let userInput =  Number(prompt(`Guess a number between 1 to 100 : `));
  if (userInput === radomNum) {
    console.log("You have won");
    break;
  } else if (userInput > radomNum) {
    console.log("You have entered a greater number");
  } else {
    console.log("You have entered a smaller number");
  }
  maxTry--;
  console.log(`Remaining Try - ${maxTry}`);
}
if (maxTry === 0)
console.log(`You have lost the game. The number was ${radomNum}`);
console.log(`Your score is ${maxTry} .`);