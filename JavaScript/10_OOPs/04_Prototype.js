




/*

    Javascript has a prototypial behaviour. It means that every object in javascript has a prototype property. It is a reference to another object. If a property is not found in an object, it will look for it in the prototype object. This process continues until either the property is found, null value is returned or the prototype chain ends.

*/





// let myName = "hitesh     "
// let mychannel = "chai     "

// console.log(myName.trueLength);


let myHeros = ["thor", "spiderman"]


let heroPower = {
    thor: "hammer",
    spiderman: "sling",

    getSpiderPower: function(){
        console.log(`Spidy power is ${this.spiderman}`);
    }
}

Object.prototype.hitesh = function(){
    console.log(`hitesh is present in all objects`);
}

Array.prototype.heyHitesh = function(){
    console.log(`Hitesh says hello`);
}

// heroPower.hitesh()
// myHeros.hitesh()
// myHeros.heyHitesh()
// heroPower.heyHitesh()

/* prototype inheritance in objects is a thing in javascript. It is a way to share properties among objects.

*/
const User = {
    name: "chai",
    email: "chai@google.com"
}

const Teacher = {
    makeVideo: true
}

const TeachingSupport = {
    isAvailable: false
}

const TASupport = {
    makeAssignment: 'JS assignment',
    fullTime: true,
    __proto__: TeachingSupport // old syntax of prototype inheritance
}

Teacher.__proto__ = User // old syntax of prototype inheritance

// modern syntax
Object.setPrototypeOf(TeachingSupport, Teacher) // the syntax is setPrototypeOf(child, parent). It sets the prototype of child to parent. so parent gets access to all the properties of child.

let anotherUsername = "ChaiAurCode     "

String.prototype.trueLength = function(){
    console.log(`${this}`);
    console.log(`True length is: ${this.trim().length}`);
}

anotherUsername.trueLength()
"hitesh".trueLength()
"iceTea".trueLength()