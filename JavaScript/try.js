// console.log(new Boolean(false) == false)

// let x = new Boolean(false)
// console.log(typeof(x));
// console.log(typeof(false));

// const a = <div> {age} </div>;
// const b = <div> {age} </div>;


// console.log(typeof (a), typeof(b));




// console.log(parseInt('a444')); //44 is given beacuse it is a valid number but aa is not a valid number so it will stop there.
// console.log(parseInt('44a4a')); //44 is given beacuse it is a valid number but aa is not a valid number so it will stop there.


/**
//  * @return {Function}
//  */
// var createCounter = function(n) {
//     return function() {
//         console.log(n);
//         let x = n;
//         n = n + 1
//         console.log(x);
//         return x;
//     };
// };

// const counter = createCounter(10)
// counter() // 10
// counter() // 11
// counter() // 12


var expect = function(val) {
    return {
        toBe: (val2) => {
            if (val !== val2) throw new Error("Not Equal");
            else return true;
        },
        notToBe: (val2) => {
            if (val === val2) throw new Error("Equal");
            else return true;
        }
    }
};

/* For example, when expect(5).toBe(4) is called,
   val is the expect parameter (so val equals 5),
   val2 is the toBe parameter (so val2 equals 4).
   Since val !== val2, aka 5 != 4, we throw error "Not Equal". */
