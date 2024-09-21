// Activity 1: If-Else Statements

const checkNumber = (num) => {
  if (num > 0) {
    return "Positive";
  } else if (num === 0) {
    return "Zero";
  } else {
    return "Negative";
  }
};

const isEligibleToVote = (age) => {
  if (age >= 18) {
    return "Eligible to Vote";
  } else {
    return "Not Eligible to Vote";
  }
};

// Activity 2: Nested If-Else Statements

const largestNumberOfThree = (num1, num2, num3) => {
  if (num1 > num2) {
    if (num1 > num3) {
      return num1;
    } else {
      return num3;
    }
  } else {
    if (num2 > num3) {
      return num2;
    } else {
      return num3;
    }
  }
};

// Activity 3: Switch-Case Statements

const checkDay = (day) => {
  console.log("Day is: ");
  switch (day) {
    case 0:
      console.log("Sunday");
      break;
    case 1:
      console.log("Monday");
      break;
    case 2:
      console.log("Tuesday");
      break;
    case 3:
      console.log("Wednesday");
      break;
    case 4:
      console.log("Thursday");
      break;
    case 5:
      console.log("Friday");
      break;
    case 6:
      console.log("Saturday");
      break;
  }
};


// Activity 4: Conditional (Ternary) Operator
const checkEvenOrOdd = (num) => {
  return num % 2 === 0 ? `${num} is Even` : `${num} is Odd`;
}

// Activity 5: Combining Conditionals

const checkLeapYear = (year) => {
  if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0) {
    return `${year} is a Leap Year`;
  } else {
    return `${year} is not a Leap Year`;
  }
}