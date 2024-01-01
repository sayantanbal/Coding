const myNums = [1, 2, 3, 4, 5]

// const myTotal = myNums.reduce(function (acc, currval) {
//     console.log(`acc: ${acc} and currval: ${currval}`);
//     return acc + currval
// }, 0) 

/*
Steps for reduce func - 
1. reduce() calls a callback func.
2. that func takes two values, val1 & val2 resp.
3. we return something.
4. we have to give the 1st parameter val1 some initial value; only used once!
    >> how do we give it?
    >> we put the value after --> ()/{},<value_to_be_put>
5. after that val1 is updated alongwith the code in b/w ()/{} .



Note - 
    1. it is not necessary to specify the val1 value. if not specified initialises as 0.
    2.  If initialValue is specified, it is used as the initial value to start the accumulation. The first call to the callbackfn function provides this value as an argument instead of an array value.
    3. If initialValue is not specified, the first element in the array is used as the initial value to start the accumulation. The first call to the callbackfn function provides this value as an argument instead of an array value.
    ex. - 
    let obj ={
        a: 1,
        b: 2,
        c: 3
    }
    
    console.log(obj+3);
    
    4. If the array is empty and no initialValue is provided, TypeError will be thrown.
    5. If the array has only one element (regardless of position) and no initialValue is provided, or if initialValue is provided but the array is empty, the solo value will be returned without calling callbackfn.

*/
const myTotal = myNums.reduce( (acc, curr) => acc+curr)

console.log(myTotal);


const shoppingCart = [
    {
        itemName: "js course",
        price: 2999
    },
    {
        itemName: "py course",
        price: 999
    },
    {
        itemName: "mobile dev course",
        price: 5999
    },
    {
        itemName: "data science course",
        price: 12999
    },
]

const priceToPay = shoppingCart.reduce((acc, item) => acc + item.price)

console.log(priceToPay);

