const descripter = Object.getOwnPropertyDescriptor(Math, "PI") // getownpropertydescriptor is a static method of object class that returns the property descriptor of the given property of the object. it takes two arguments, first is the object and second is the property name.

// console.log(descripter);

// console.log(Math.PI);
// Math.PI = 5
// console.log(Math.PI);

const chai = {
    name: 'ginger chai',
    price: 250,
    isAvailable: true,

    orderChai: function(){
        console.log("chai nhi bni");
    }
}

// console.log(Object.getOwnPropertyDescriptor(chai, "name"));

Object.defineProperty(chai, 'name', { // defineproperty is a static method of object class that defines a new property directly on an object, or modifies an existing property on an object, and returns the object.
    //writable: false,
    // enumerable: true,
    
})

console.log(Object.getOwnPropertyDescriptor(chai, "name"));


/* if you want to use for-of loop on an object
    1. then you have to make it iterable. to make an object iterable, you have to define a method named Symbol.iterator on the object. this method should return an object with a next() method. this next() method should return an object with two properties, value and done. value is the value of the current iteration and done is a boolean value that tells whether the iteration is complete or not. if the iteration is complete, then done should be true, else false.

    2. ypu can iterate through Object.entries(object) method. it returns an array of arrays. each array contains two elements, first is the key and second is the value.

    3. you can iterate through keys using Object.keys(object) method. it returns an array of keys of the object.

    4. you can iterate through values using Object.values(object) method. it returns an array of values of the object.
*/

for (let [key, value] of Object.entries(chai)) {
    if (typeof value !== 'function') {
        
        console.log(`${key} : ${value}`);
    }
}