// Activity 1: For loop

// Task 1: Print numbers from 1 to 10

const numbers = () => {
  for (let i = 1; i <= 10; i++) {
    console.log(i);
  }
};


// Task 2: Print table of 5
const tableOfFive = () => {
  for (let i = 1; i <= 10; i++) {
    console.log(i * 5);
  }
};


// Activity 2: While loop

// Task 3: Print sum of numbers from 1 to 10 for a while loop
const sumOfNumbers = () => {
  let i = 1;
  let sum = 0;
  while (i <= 10) {
    sum += i;
    i++;
  }
  console.log(sum);
};

// Task 4: Print numbers from 10 to 1 using a while loop
const reverseNumbers = () => {
  let i = 10;
  while (i >= 1) {
    console.log(i);
    i--;
  }
};

// Activity 3: Do while loop

// Task 5: Print numbers from 1 to 5 using a do while loop

const doWhileLoop = () => {
    let i = 1;
    do {
        console.log(i);
        i++;
    } while (i <= 5);
}

// Task 6: calculate factorial of a number using a do while loop

const factorial = (num) => {
    let i = 1;
    let fact = 1;
    do {
        fact *= i;
        i++;
    } while (i <= num);
    console.log(fact);
}


// Activity 4: Nested loops

// Task 7: Print the following pattern using nested loops
// *
// * *
// * * *
// * * * *
// * * * * *

const pattern = (noOfRows) => { 
    for (let i = 1; i <= noOfRows; i++) {
        let pattern = '';
        for (let j = 1; j <= i; j++) {
            pattern += '* ';
        }
        console.log(pattern);
    }
}


// Activity 5: loops control statements

// Task 8: Print numbers from 1 to 10 but skip 5 using continue statement
const skipFive = (number) => {
    for (let i = 1; i <= num; i++) {
        if (i === 5) {
            continue;
        }
        console.log(i);
    }
}

// Task 9: Print numbers from 1 to 10 but stop the loop if the number is 7

const stopAtSeven = (num) => {
    for (let i = 1; i <= num; i++) {
        if (i === 7) {
            break;
        }
        console.log(i);
    }
}