// console.log(2>1);
// console.log(2>=1);
// console.log(2!=1);
// console.log(2<1);
// console.log(2<=1);
// console.log(2==1);
// console.log(2===1);

// console.log('2'>1);
// console.log("02">1);
// console.log('2'==1);
// console.log("2"===1);



// console.log(null >= 0);
// console.log(null == 0);
// console.log(null <= 0)

/*
the reason is that comparison operators and equality checking operators work differently.

comparison operators convert null to a number treating it as a 0.

i.e. null > 0 is false casue 0 !> 0.
     
but equality check doesn't work like this.


if you take a variable and initialise it with null it works the same. means comparison operators convert null to 0 for that instance only.
*/


let x = null;
// console.log(x >= 0);
// console.log(x == 0);
// console.log(x <= 0)
// console.log(x);
/* 
    Here x is null. so it's converted to 0. when the checking is done... the instance is finished and x is again null.
*/



/* this problem doesn't occur with undefined.*/
/* but if you take a variable and initialise it with undefined it doesn't work the same. means comparison operators convert undefined to NaN for that instance only.*/

// console.log(undefined >= 0);
// console.log(undefined == 0);
// console.log(undefined <= 0)
// let x = undefined;
// console.log(x >= 0);
// console.log(x == 0);
// console.log(x <= 0)


/****************************Memory******************************** */


// Stack and Heap

// stack => primitive, heap => non primitive\

// let myName = "Sayantan";
// let anotherName = myName;

// anotherName = "meow meow";

// console.log(myName);
// console.log(anotherName);

let user1 = {
    email : "abc@gmail.com",
    upi_ID : "abc@okaxis"
}

let user2 = user1

user2.email = "meow@email.com"

console.log(user1.email);
console.log(user2.email);
console.log(typeof user1);

// both user1 and user2 are pointing to the same object in the heap. so if you change one the other will also change.
// Remember: primitive types are stored in stack and non primitive types are stored in heap. Object is a non primitive type so stored in heap.