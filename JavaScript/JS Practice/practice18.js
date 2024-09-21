// 56. Write a JavaScript program to divide two positive numbers and return the result as string with properly formatted commas. 

function divideTwoPositiveNumbers(num1, num2) {
    return (num1 / num2).toLocaleString();
    }

console.log(divideTwoPositiveNumbers(200, 100));
console.log(divideTwoPositiveNumbers(1000, 100));
