// let score = 33 ---> number not Number!
// let score = "33"
// let score = "33abc"
// let score = null;  // null converted into Number gives 0.
// let score = undefined --> converted to Number gives NaN => Not a Number. It's type is a number.
// true => 1, false => 0.


// console.log(typeof score);
// // console.log(typeof(score));


// let valueInInt = Number(score);
// console.log(typeof(valueInInt));


// console.log(valueInInt);



// let isLoggedIn = ""; when converted to boolean gives false.
// let isLoggedIn = "        "; //  but when some characters are added inside and then converted to boolean gives true.
// let booleanisLoggedIn = Boolean(isLoggedIn);
// console.log(booleanisLoggedIn);


// let someNumber = 33;
// let stringNumber = String(someNumber);
// // console.log(stringNumber);  
// console.log(typeof stringNumber);




                /**************OPERATIONS***************/


// let value = 3;
// let negValue = -value;
// console.log(negValue);
// console.log(2+2);
// console.log(2-2);
// console.log(2*2);
// console.log(2/2); 
// console.log(3**5); // ** means 3 to the power 5
// console.log(2%2);


// let str1 = "hello";
// let str2 = "Sayantan";

// let str3 = str1+str2;
// console.log(str3);

// console.log(1+"2");
// console.log(1+2+"2");
// console.log("1"+2);
// console.log("1"+2+2);


// console.log(true); // gives "true" as a output
// console.log(+true); // means (+true);converts to a number and gives 1. 
// console.log(true+);// isn't a correct syntax
// console.log(+""); // means (+false); converts to a number and gives 0. 
// console.log(+"    "); // means (+true); converts to a number and gives 0.




// let abc = (+true);
let abc = (+false);
console.log(typeof abc);



gameCounter = 100; // if you don't specify let var const etc then it's a global variable

gameCounter++;
console.log(gameCounter);
++gameCounter;
console.log(gameCounter);

console.log(gameCounter++);
console.log(++gameCounter);
console.log(--gameCounter);
console.log(gameCounter--);
// console.log(++gameCounter--);
// console.log(--gameCounter++); both are wrong syntax.