// singleton
// Object.create --> this is how obj is declared from a constructor. It is a singleton obj.

/* If we declare objects as literals then object is never singleton.
but if we declare objects from constructor then always singleton.
*/


// object literals

const mySym = Symbol("key1")
//Symbol is a built-in object whose constructor returns a symbol primitive — also called a Symbol value or just a Symbol — that's guaranteed to be unique. Symbols are often used to add unique property keys to an object that won't collide with keys any other code might add to the object, like those present in an object literal.

const JsUser = {
    name: "Sayantan",
    "full name": "Sayantan Bal", // we can't use two words as a variable. as the key will be treated as a String anyways, we use double quote to make it a string and use it.
    [mySym]: "mykey1",// If we refer as a symbol use[]. we can use symbol as a key. but we can't access it using '.'. we have to use [] to access it.
    age: 20,
    location: "Kolkata",
    email: "abc@google.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}

// console.log(JsUser.email)
// console.log(JsUser["email"])
// console.log(JsUser["full name"]) // we can't use more than one word variable with '.'; so we have to use [] to access it.
// so JsUser.full name will give error. but JsUser["full name"] will work.
// console.log(JsUser[mySym]) // we can't access it using '.'. we have to use [] to access it. because it is a symbol.
// console.log(typeof JsUser[mySym])

JsUser.email = "abc@chatgpt.com"
// Object.freeze(JsUser)
// freeze will make the object immutable. so we can't change the value of any key.
JsUser.email = "abc@microsoft.com"
// console.log(JsUser);

JsUser.greeting = function(){
    console.log("Hello JS user");
}
JsUser.greetingTwo = function(){
    console.log(`Hello JS user, ${this.name}`);
}

console.log(JsUser.greeting);// this will give the function definition pr reference.
console.log(JsUser.greeting());
console.log(JsUser.greetingTwo());

// on executing the above code, we will see that there is an o/p "undefined" after the actual o/p. 