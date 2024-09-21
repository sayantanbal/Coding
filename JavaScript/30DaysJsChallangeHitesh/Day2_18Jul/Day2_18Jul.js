// Activity 1: Arithmetic Operations

let a = 10;
let b = 20;
let c = a + b;
console.log(c);

let d = a - b;
console.log(d);

let e = a * b;
console.log(e);

let f = a / b;
console.log(f);

let g = a % b;
console.log(g);

// Activity 2: Assignment Operators

let h = 10;
h += 5;
console.log(h);

let i = 20;
i -= 5;
console.log(i);

// Activity 3: Comparison Operators

let j = 10;
let k = 20;
console.log(j > k); // false
console.log(j < k); // true

let l = 10;
let m = 10;
console.log(l >= m); // true
console.log(l <= m); // true

let n = 10;
let o = 20;
console.log(n == o); // false

let p = 10;
let q = "Sayantan";
console.log(p === q); // false

// Activity 4: Logical Operators

let r = true;
let s = false;
console.log(r && s); // false
console.log(r || s); // true
console.log(!r); // false


// Activity 5: Ternary Operators
const WhoIsPositive = (num1)=>{
    return num1 > 0 ? `${num1} is positive` : `${num2} is negative`;
}
WhoIsGreater(10, 20); // 20 is greater