const promiseOne = new Promise(function(resolve, reject){ 
    /*  Promise holds a callback function. This callback function holds two arguments, resolve and reject.
        resolve and reject are functions. resolve is called when the promise is resolved and reject is called when the promise is rejected.
        Do an async task
        DB calls, cryptography, network

    when resolve() is connceted to the promise, only then the promise is resolved. else the promise is pending.

    resolve() executes whatever is inside the .then() method.
     */
    setTimeout(function(){
        console.log('Async task is compelete');
        resolve()
    }, 1000)
})


// .then is directly called when the promise is resolved.
promiseOne.then(function(){
    console.log("Promise consumed");
})


// here we're doing the same thing directly without declaring a variable.
new Promise(function(resolve, reject){
    setTimeout(function(){
        console.log("Async task 2");
        resolve()
    }, 1000)
}).then(function(){
    console.log("Async 2 resolved");
})

const promiseThree = new Promise(function(resolve, reject){
    setTimeout(function(){
        resolve({username: "Chai", email: "chai@example.com"}) // resolve can only take one argument. if you want to pass multiple arguments, pass an object. mostly object is passed. now this argument is passed to the .then() method directly.
    }, 1000)
})

promiseThree.then(function(user){ // "user" is the argument directly passed from the resolve() method. "user" is the object "{username: "Chai", email: chai@example.com}"
    console.log(user);
})

const promiseFour = new Promise(function(resolve, reject){
    setTimeout(function(){
        let error = true
        if (!error) {
            resolve({username: "hitesh", password: "123"})
        } else {
            reject('ERROR: Something went wrong')
        }
    }, 1000)
})

/*
const username = promiseFour.then((user) => {
   console.log(user);
   return user.username
})
        in the above code, the promise is resolved and the username is returned. but the username is not stored in the variable "username". the variable "username" is undefined. this is because the promise is resolved after the variable "username" is declared. so the variable "username" is undefined. to solve this problem, we use .then() method; .then() method is called when the promise is resolved. so the promise is resolved and the username is returned and stored in the variable "username".
*/

 promiseFour
 .then((user) => {
    console.log(user);
    return user.username
}).then((username) => {   //this then() method gets the username returned from the previous then() method. chained .then() methods gets previous then() method's returned value. this is called promise chaining. this syntax is very useful when connecting to DB.
    console.log(username);
}).catch(function(error){ // .catch() method is called when the promise is rejected; .catch() method is used to catch the error; .catch() method is used to catch the error thrown by the reject() method. it takes a callback function as an argument. the callback function takes the error as an argument.
    console.log(error);
}).finally(() => console.log("The promise is either resolved or rejected"))



const promiseFive = new Promise(function(resolve, reject){
    setTimeout(function(){
        let error = true
        if (!error) {
            resolve({username: "javascript", password: "123"})
        } else {
            reject('ERROR: JS went wrong')
        }
    }, 1000)
});

// async await is used to consume promises in a synchronous way without using .then() method and without using .catch() method. async await is used to consume promises in a synchronous way without using .then() method and without using .catch() method and without using .finally() method.

async function consumePromiseFive(){
    try {
        const response = await promiseFive
        console.log(response);
    } catch (error) {
        console.log(error);
    }
}

consumePromiseFive()

// async function getAllUsers(){
//     try {
//         const response = await fetch('https://jsonplaceholder.typicode.com/users') // fetch() is a function that takes a url as an argument and returns a promise object.

//         const data = await response.json()   // parsing as json sometimes takes time. so we should await this also.
//         console.log(data);
//     } catch (error) {
//         console.log("E: ", error);
//     }
// }

//getAllUsers()

fetch('https://api.github.com/users/sayantanbal') // as fetch() is a function that takes a url as an argument and returns a promise object, so we can use .then() method to consume the promise.
.then((response) => {
    return response.json()
})
.then((data) => {
    console.log(data);
})
.catch((error) => console.log(error))

// promise.all
// yes this is also available, kuch reading aap b kro.




/*

https://developer.mozilla.org/en-US/docs/Web/API/fetch must read.

*/