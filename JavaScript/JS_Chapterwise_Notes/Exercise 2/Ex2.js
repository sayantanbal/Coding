
const prompt = require("prompt-sync")({sigint : true});

let maxTry = 10;
let userScore = 0;
let compScore = 0;

while (maxTry !== 0) {
  let userInput = prompt(`Enter your choice : `);
  userInput = userInput.toLowerCase();
  let compInput = compChoice();
  console.log(`Computer choice is ${compInput}`);
  let result = game(userInput, compInput);
  if (result === "won") {
    userScore++;
  } else if (result === "lost") {
    compScore++;
  }
  maxTry--;
  console.log(`Remaining Try - ${maxTry}`);
}
if (maxTry === 0) {
  console.log(`You have lost the game.`);
  console.log(`Your score is ${userScore} .`);
  console.log(`Computer score is ${compScore} .`);
}

function compChoice() {
  let choice = ["snake", "water", "gun"];
  let randomNum = Math.floor(Math.random() * 3);
  return choice[randomNum];
}

function game(userInput, compInput) {
  if (userInput === compInput) {
    console.log("Draw");
    return "draw";
  } else if (userInput === "snake" && compInput === "water") {
    console.log("You won");
    return "won";
  } else if (userInput === "snake" && compInput === "gun") {
    console.log("You lost");
    return "lost";
  } else if (userInput === "water" && compInput === "snake") {
    console.log("You lost");
    return "lost";
  } else if (userInput === "water" && compInput === "gun") {
    console.log("You won");
    return "won";
  } else if (userInput === "gun" && compInput === "snake") {
    console.log("You won");
    return "won";
  } else if (userInput === "gun" && compInput === "water") {
    console.log("You lost");
    return "lost";
  }
}

