const user = {
    username: "hitesh",
    loginCount: 8,
    signedIn: true,

    getUserDetails: function(){
        //console.log("Got user details from database");
        // console.log(`Username: ${this.username}`); // if the func is called without "this." then it will give "undefined". cause the func  is going to js call stack and it will not find the username there. so we have to use "this." to tell the func that the username is in the object.


        console.log(this);
        // "this" is a keyword which is used to refer to the current execution scope. in this case the current execution scope is the object "user". so "this" will refer to the object "user".
    }

}

//console.log(user.username)
//console.log(user.getUserDetails());

// console.log(this); // in this case the current execution scope is the global scope. so "this" will refer to the global scope. 

// when we're in node environment then "this" will refer to the global scope, that is an empty object {}. but when we're in browser environment then "this" will refer to the window object.




// Constructor Function -->
function User(username, loginCount, isLoggedIn){
    this.username = username;
    this.loginCount = loginCount;
    this.isLoggedIn = isLoggedIn

    this.greeting = function(){
        console.log(`Welcome ${this.username}`);

    }

    return this   // if you don't return anything from a constructor function then it will still return the object. but if you return something from a constructor function then it will return that thing instead of the object. 
    // some doubts here?
}

const userOne = new User("hitesh", 12, true)
const userTwo = new User("ChaiAurCode", 11, false)
console.log(userOne.constructor); // constructor is a property of the object. it will tell us which constructor function is used to create the object. it tells about itself.
//console.log(userTwo);



/* 
this is a 4 step process.

Step - 1:
    new keyword is used to create a new object from a constructor function. now new keyword creates a empty object at first.
Step - 2:
    now the constructor function is called with the new keyword.
Step - 3:
    so the "this" keyword will refer to the empty object. then the constructor function will run and it will add the properties to the empty object. 
Step - 4:
    then it will return the object. so the object will be stored in the variable.
*/


//  go through this ---> https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/instanceof