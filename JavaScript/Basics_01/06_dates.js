// dates are usually declared in miliseconds.
// date type is object

let myDate = new Date();
console.log(myDate);
// console.log(myDate.toString()); // gives date time along with GMT+ and what standard time.
// console.log(myDate.toISOString());
// console.log(myDate.toLocaleString()); // gives date along with time
// console.log(myDate.toDateString());



// let newDate = new Date (2023, 0, 12) // js initializes months from 0. single digit so treated as an array.
// console.log(newDate.toDateString());
// console.log(newDate.toLocaleString()); // shows date and time.
// console.log(newDate.toLocaleDateString()); // shows date only

let newDate1 = new Date ("2023-10-10")// but when written under " ". we're using yyyy-mm-dd. then month is starting from 1 instead of 0.
// console.log(newDate1.toDateString());
// console.log(newDate1.toLocaleString()); // shows date and time.
// console.log(newDate1.toLocaleDateString()); // prints the current date with dd/mm/yyyy

// // you can reverse the order. i.e. mm-dd-yyyy

// let newDate2 = new Date ("30-12-20003") // wrong js only takes mm-dd-yyyy or dd-mm-yyyy
// console.log(newDate2.toDateString());




// let TimeStamp = Date.now()
// // console.log(TimeStamp); 
// // console.log(newDate1.getTime());
// console.log(Math.floor(Date.now()/1000));


let MynewDate = new Date
// console.log(MynewDate.getMinutes());
// console.log(MynewDate.getMonth()+1);


// we can customize .toLocaleString() property.
MynewDate.toLocaleDateString('default',{  
    weekday : "long"
})