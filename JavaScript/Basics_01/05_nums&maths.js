// const score = 400

// const balance = new Number(100000)
// console.log(score);
// console.log(balance);
// console.log(balance.toString.length); // toString with out parenthesis only converts 1st letter to String.

// console.log(balance.toString().length); // toString with parenthesis converts the whole to String.

// console.log(balance.toFixed(2));

// const otherNumber = 122.55696
// console.log(otherNumber.toPrecision(4)); // the argument means how much value to be focused on.

const hundreds = 100000000;
console.log(hundreds.toLocaleString('en-US')); // converts to a string with commas for lagre numbers. argument takes how to show the value
console.log(hundreds.toLocaleString('en-IN')); // converts to a string with commas for lagre numbers. argument takes how to show the value

/************************************ maths *********************************/

// console.log(Math);

// console.log(Math.abs(-4));
//  console.log(Math.round(-4.558));
// console.log(Math.ceil(-4.558));
// console.log(Math.floor(-4.558));

// console.log(Math.min(-4, 56, 7, 8));
// console.log(Math.max(-4, 56, 7, 8));


// console.log(Math.random()); 

const min = 10
const max = 20
let x = Math.floor(Math.random() * (max - min + 1 ) + min)
console.log(x);