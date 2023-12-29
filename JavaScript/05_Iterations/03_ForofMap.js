

/* 
    for-of loop is used for iterable objects as arrays and maps.
    for-in loop is used for objects.
*/


// for of

// ["", "", ""]
// [{}, {}, {}]

const arr = [1, 2, 3, 4, 5]

for (const num of arr) {
    //console.log(num);
}

const greetings = "Hello world!"
for (const greet of greetings) {
    //console.log(`Each char is ${greet}`)
}

// Maps

const map = new Map()
map.set('IN', "India")
map.set('USA', "United States of America")
map.set('Fr', "France")
map.set('INA', "India") // map doesn't take duplicate value pairs


// console.log(map);

for (const [key, value] of map) {
    // console.log(key, ':-', value);
}

const myObject = {
    game1: 'NFS',
    game2: 'Spiderman'
}
// object is not iterable by for-of loop it can be iteraterd by for-in loop. for-of loop is used for arrays and maps.
// why for-of loop is not used for objects? because objects are not iterable. for-of loop is used for iterable objects.

// throws error
// for (const [key, value] of myObject) {  
    //     console.log(key, ':-', value);
// }
    



/**************************** advance discussion **********************/








/* why object is not iterable?
console.log(Object.getOwnPropertyDescriptor(myObject, "game1"));

// why object is not iterable? because object is not an iterable. it is an object. object is not iterable.
// how to make an object iterable? by using the below code:
// Object.defineProperty(myObject, "game1", {
//     enumerable: true,
//     configurable: true,
//     writable: true,
//     value: 'NFS'
// })
// Object.defineProperty(myObject, "game2", {
//     enumerable: true,
//     configurable: true,
//     writable: true,
//     value: 'Spiderman'
// })
// console.log(Object.getOwnPropertyDescriptor(myObject, "game1"));
// console.log(Object.getOwnPropertyDescriptor(myObject, "game2"));
// for (const [key, value] of myObject) {  
//     console.log(key, ':-', value);
// }
// console.log(Object.getOwnPropertyDescriptor(myObject, "game1"));
// console.log(Object.getOwnPropertyDescriptor(myObject, "game2"));
// for (const [key, value] of myObject) {  
//     console.log(key, ':-', value);
// }

// for (const [key, value] of myObject) {  
//     console.log(key, ':-', value);
// }
// console.log(Object.getOwnPropertyDescriptor(myObject, "game1"));
// console.log(Object.getOwnPropertyDescriptor(myObject, "game2"));
// for (const [key, value] of myObject) {  
//     console.log(key, ':-', value);
// }
// console.log(Object.getOwnPropertyDescriptor(myObject, "game1"));
// console.log(Object.getOwnPropertyDescriptor(myObject, "game2"));




// why object is not iterable? because it doesn't have a next() method. for-of loop uses next() method internally.
// how to make an object iterable? use the below code:
// myObject[Symbol.iterator] = function(){
//     const keys = Object.keys(myObject)
//     let index = 0
//     return {
//         next: function(){
//             if (index < keys.length){
//                 const key = keys[index]
//                 index++
//                 const value = myObject[key]
//                 return {
//                     value: {
//                         key,
//                         value
//                     },
//                     done: false
//                 }
//             }
//             else{
//                 return {
//                     done: true
//                 }
//             }
//         }
//     }
// }
//


*/