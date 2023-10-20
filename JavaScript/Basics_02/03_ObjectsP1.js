// singleton
// Object.create --> this is how obj is declared from a constructor. It is a singleton obj.

/* If we declare objects as literals then object is never singleton.
but if we declare objects from constructor then always singleton.
*/


// object literals

const mySym = Symbol("key1")


const JsUser = {
    name: "Sayantan",
    "full name": "Sayantan Bal", // we can't use two words as a variable. as the key will be treated as a String anyways, we use double quote to make it a string and use it.
    [mySym]: "mykey1",
    age: 20,
    location: "Kolkata",
    email: "abc@google.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}

// console.log(JsUser.email)
// console.log(JsUser["email"])
// console.log(JsUser["full name"]) // we can't use more than one word variable with '.'; so we have to use [] to access it.
// console.log(JsUser[mySym])

JsUser.email = "abc@chatgpt.com"
// Object.freeze(JsUser)
JsUser.email = "abc@microsoft.com"
// console.log(JsUser);

JsUser.greeting = function(){
    console.log("Hello JS user");
}
JsUser.greetingTwo = function(){
    console.log(`Hello JS user, ${this.name}`);
}

console.log(JsUser.greeting());
console.log(JsUser.greetingTwo());