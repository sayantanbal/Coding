// const user = {
//     username: "sayantan",
//     price: 999,

//     welcomeMessage: function() {
//         console.log(`${this.username} , welcome to website`);
//         console.log(this); // this keyword shows curr context
//     }
// }

// user.welcomeMessage()
// user.username = "sam"
// user.welcomeMessage()

// console.log(this);

// function chai(){
//     let username = "sayantan"
//     console.log(this.username); // this keyword works only inside object.
// }

// chai()

const chai = function () {
  let username = "sayantan";
  //   console.log(username);
};
// chai()
// const chai =  () => {
//     let username = "sayantan"
//     console.log(this);
// }
// chai()








const obj = {
    name: "abc",
    age: 20,
    print: function() {
      console.log(this)
    }
  }
obj.print()

const obj1 = {
  name: "abc",
  age: 20,
  print: () => {
    console.log(this);
  },
};
obj1.print();

/*
If func is declared normally within a object then this keyword refers that object. scope is within the object

But, If func is declared as an arrow func within a object then this keyword doesn't refer to that object. it is a global object.
*/







// const addTwo = (num1, num2) => {
//     return num1 + num2
// }

// const addTwo = (num1, num2) =>  num1 + num2 // this is called implicit return. if single line code is returned then you can do this

// const addTwo = (num1, num2) => ( num1 + num2 )

const addTwo = (num1, num2) => ({ username: "sayantan" });

// console.log(addTwo(3, 4))

// const myArray = [2, 5, 3, 7, 8]

// myArray.forEach()
