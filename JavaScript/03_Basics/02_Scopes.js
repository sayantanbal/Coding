//var c = 300
let a = 300
if (true) {
    let a = 10
    const b = 20 // const is a block scoped 
    // console.log("INNER: ", a);
    
}



// console.log(a);
// console.log(b);
// console.log(c);


function one(){
    const username = "sayantan"

    function two(){
        const website = "youtube"
        console.log(username);
    }
    // console.log(website);

     two()

}

// one()

if (true) {
    const username = "sayantan"
    if (username === "sayantan") {
        const website = " youtube"
        // console.log(username + website);
    }
    // console.log(website);
}

// console.log(username);


// ++++++++++++++++++ interesting ++++++++++++++++++


console.log(addone(5))

function addone(num){
    return num + 1
}



addTwo(5) 
const addTwo = function(num){
    return num + 2
}


/*
    hoisting is a process where the javascript engine moves all the function declaration to the top of the file.
    `addone` is a function declaration and `addTwo` is a function expression.
    So, we can see that the function declaration is hoisted but the function expression is not hoisted.
    That's why we can call the function declaration before it is declared but we can't call the function expression before it is declared.


    function declaration:
    function addone(num){
        return num + 1
    }

    function expression:
    const addTwo = function(num){
        return num + 2
    }

    function expression is holding a function in a variable.
*/