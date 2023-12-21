// array

const myArr = [1, 2, 3, 4]; // it is okay if u use diff type of elements
// const hEros = ["abc", "bcd", "cde"];

const abc = new Array(1, 2, 3, 4, 5, 6);

// console.log(myArr[0]);

// array methods

// myArr.push(9)
// myArr.pop()
// console.log(myArr);
// console.log(myArr.length);

// myArr.unshift(0)
// myArr.unshift(6)
// myArr.unshift(6)
// myArr.shift()

// console.log(myArr.includes(9));
// console.log(myArr.indexOf(6));

const newArr = myArr.join() // converts whole array to a string

// console.log(myArr);
// console.log(newArr);

// slice & splice

console.log("A ", myArr);

const myn1 = myArr.slice(1, 3) // keeps the original array intact

console.log(myn1);
console.log("B ", myArr);


const myn2 = myArr.splice(1, 3) // changes the original array
console.log("C ", myArr);
console.log(myn2);