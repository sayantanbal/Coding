// const tinderUser = new Object() // same output but it's a singleton obj.
const tinderUser = {} // non singleton obj

tinderUser.id = "123abc"
tinderUser.name = "Sammy"
tinderUser.isLoggedIn = false

// console.log(tinderUser);

const regularUser = {
    email: "some@gmail.com",
    fullname: {
        userfullname: {
            firstname: "sayantan",
            lastname: "bal"
        }
    }
}

// console.log(regularUser.fullname.userfullname.firstname); // we use ? to check whether it exists or not. sometimes we call APIs and their response may or maynot be exactly similar to the given syntax.

const obj1 = {1: "a", 2: "b"}
const obj2 = {3: "a", 4: "b"}
const obj4 = {5: "a", 6: "b"}


// u can use .assign({}, a1, a2, etc) to merge all object values where the arguments of .assign() are the objects to be merged. or u can use spread operator from array. it works the same, both are available for multiple arguments.
// const obj3 = { obj1, obj2 }



// const obj3 = Object.assign({}, obj1, obj2, obj4) 
/* {} is used to make sure the output is a object. as assign() works as follows- 

first argument is a target. and rest are source. so to make sure the o/p is an obj, we're targeting an empty obj, i.e. {}

*/

const obj3 = {...obj1, ...obj2}
// console.log(obj3);


const users = [
    {
        id: 1,
        email: "s@gmail.com"
    },
    {
        id: 2,
        email: "e@gmail.com"
    },
    {
        id: 3,
        email: "x@gmail.com"
    },
]

users[1].email
// console.log(tinderUser);

// console.log(Object.keys(tinderUser)); // returns an array of keys
// console.log(Object.values(tinderUser)); // returns an array of values
// console.log(Object.entries(tinderUser)); // returns a multidimensional array made with each keys and corresponding values together.

// console.log(tinderUser.hasOwnProperty('isLoggedIn')); // checks if the property is availabe or not. it is good practice to 1st check if property is availabe before processing through it


const course = {
    coursename: "js in hindi",
    price: "999",
    courseInstructor: "sayantan"
}

const {courseInstructor} = course // this is called de-structuring.
console.log(typeof courseInstructor); // this will give the value of courseInstructor key.
 
const {courseInstructor: instructor} = course // :instructor is a way to call the key "courseInstructor" as "instructor". this is called de-structuring.

console.log(courseInstructor);
console.log(instructor);

// {
//     "name": "sayantan",
//     "coursename": "js in hindi",
//     "price": "free"
// } //JSON is an obj. it's both keys and objects are string.

[
    {},
    {},
    {}
]
// JSON can be an array, in which there maybe standalone values maybe another arrays maybe another objects; or collection of each.