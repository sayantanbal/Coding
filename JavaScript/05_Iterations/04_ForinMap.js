const myObject = {
    js: 'javascript',
    cpp: 'C++',
    rb: "ruby",
    swift: "swift by apple"
}

for (const key in myObject) {
    //console.log(`${key} shortcut is for ${myObject[key]}`);
}


// for-in loop provides keys. array also has keys. they are 0,1,2,3, ... etc.
// see the below program

const programming = ["js", "rb", "py", "java", "cpp"]

for (const key in programming) {
    //console.log(programming[key]); // this outputs 0,1,2,3, ... etc. when "key" is printed. associate with the array such as provide indexing it will show values.
}


// map is not iterable by for-in
// const map = new Map()
// map.set('IN', "India")
// map.set('USA', "United States of America")
// map.set('Fr', "France")
// map.set('IN', "India")

// for (const key in map) {
//     console.log(key);
// }