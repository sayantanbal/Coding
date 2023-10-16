// console.log(2>1);
// console.log(2>=1);
// console.log(2!=1);
// console.log(2<1);
// console.log(2<=1);
// console.log(2==1);
// console.log(2===1);

// console.log('2'>1);
// console.log("02">1);
console.log('2'==1);
console.log("2"===1);



// console.log(null >= 0);
// console.log(null == 0);
// console.log(null <= 0)

/*
the reason is that comparison operators and equality checking operators work differently.

comparison operators convert null to a number treating it as a 0.

i.e. null > 0 is false casue 0 !> 0.
     
but equality check doesn't work like this.


if you take a variable and initialise it with null it works the same. means comparison operators convert null to 0 for a that instance only.
*/


// let x = null;
// console.log(x >= 0);
// console.log(x == 0);
// console.log(x <= 0)



/* this problem doesn't occur with undefined.*/

// console.log(undefined >= 0);
// console.log(undefined == 0);
// console.log(undefined <= 0)
// let x = undefined;
// console.log(x >= 0);
// console.log(x == 0);
// console.log(x <= 0)