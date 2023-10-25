// Immediately Invoked Function Expressions (IIFE) used to get rid of the pollution from global scope variables


(function chai(){
    // named IIFE
    console.log(`DB CONNECTED`);
})(); // this semicolon is given to identify the end of IIFE else JS can not identify where to stop the context.

// This is how IIFE is written. (function def etc.)(this parenthesis for execution of a function)

( (name) => {
    //un-named IIFE
    console.log(`DB CONNECTED TWO ${name}`);
} )("sayantan") ;
