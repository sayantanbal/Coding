let currDate = new Date()
// console.log(currDate);
// console.log(currDate.toLocaleDateString());


let date = currDate.getDate()
let month = currDate.getMonth() + 1
let year = currDate.getFullYear()


console.log(date + '/' + month + '/' + year);
console.log(date + '-' + month + '-' + year);
console.log(month + '-' + date + '-' + year);
