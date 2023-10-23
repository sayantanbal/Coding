
// function sayMyName(){
//     console.log("S");
//     console.log("A");
//     console.log("Y");
//     console.log("A");
//     console.log("N");
//     console.log("T");
//     console.log("A");
//     console.log("N");
// }

// sayMyName() --> Execute
// sayMyName --> Reference

// function addTwoNumbers(number1, number2){ // number1, number2 is parameters

//     console.log(number1 + number2);
// }

// function addTwoNumbers(number1, number2){

//     // let result = number1 + number2
//     // return result
//     return number1 + number2
// }

// const result = addTwoNumbers(3, 5)  // 3,5 is arguments

// console.log("Result: ", result);


// function loginUserMessage(username = "sam"){  //by declaring  (username = "sam") by default the value of username is "sam". so it never goes with empty value.
    // if(!username){ // when undefined is used with ! operator it gives true.
        // console.log("PLease enter a username");
//         return
//     }
//     return `${username} just logged in`
// }

// console.log(loginUserMessage("hitesh"))
// console.log(loginUserMessage("hitesh"))


// function calculateCartPrice(val1, val2, ...num1){ // ... is both spread operator and rest operator. 
//     return num1
// }

// console.log(calculateCartPrice(200, 400, 500, 2000))

const user = {
    username: "hitesh",
    price: 199,
    cartItem : 4
}

// function handleObject(anyobject){
//     console.log(`\n Username is ${anyobject.username} and price is ${anyobject.price} and in cart you have ${anyobject.cartItem} items. \n`);
// }

// handleObject(user)

/*you can pass direct object to it. 

1. Call the function.
2.
*/
handleObject({
    username: "sam",
    price: 399
})

const myNewArray = [200, 400, 100, 600]

function returnSecondValue(getArray){
    return getArray[1]
}

console.log(returnSecondValue(myNewArray));
console.log(returnSecondValue([200, 400, 500, 1000]));