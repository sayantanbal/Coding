// Activity 1: Variable Declaration
var aVar = 10;
console.log(aVar);

let bVar = "Sayantan";
console.log(bVar);

// Activity 2: Constant Declaration

const cVar = true;
console.log(cVar);

// Activity 3: Data Types
let dVar = 10;
console.log(typeof dVar);

let eVar = "Sayantan";
console.log(typeof eVar);

let fVar = true;
console.log(typeof fVar);

let gVar = null;
console.log(typeof gVar);

let hVar = [1, 2, 3, 4, 5];
console.log(typeof hVar); // prints object as arrays in JavaScript are actually objects with some special properties.

console.log(Array.isArray(hVar)); // prints true, this method checks if the given object is an array or not.

// Activity 4: Reassigning Variables
let iVar = 10;
console.log(iVar);
iVar = 20;
console.log(iVar);

// Activity 5: Understanding "const"
const jVar = 10;
console.log(jVar);
//jVar = 20; // TypeError: Assignment to constant variable.
