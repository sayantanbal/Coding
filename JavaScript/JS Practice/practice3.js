
function strReverse (anyString){
    return anyString.split('').reverse().join('');
}

// we can use multiple methods consecutively

let str = 'w3resource'
// console.log(str);
// console.log(str.reverse)

console.log(strReverse(str))