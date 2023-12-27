function SetUsername(username){
    //complex DB calls
    this.username = username
    console.log("called");
}

function createUser(username, email, password){
    SetUsername.call(this, username) // .call is a method of function object. It is used to call a function with a given "this" value and arguments provided individually. therefore, we can use it to call a function with an owner object as the first argument (parameter). here we are calling SetUsername function with "this" value as the object that is being created by the createUser function. so setusername function will be called with the object that is being created by the createUser function. therefore, the username property will be set to the object that is being created by the createUser function. 
   
    this.email = email
    this.password = password
}

const chai = new createUser("chai", "chai@fb.com", "123")
console.log(chai);