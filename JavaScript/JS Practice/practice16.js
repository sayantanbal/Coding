// 54. Write a JavaScript program to count the number of vowels in a given string.
// sample input: "The quick brown fox"
// sample output: 5
// sample input: "The quick brown fox jumps over the lazy dog"
// sample output: 11

function checkNoOfVowels (str){
    // const vowels = ['a', 'e', 'i', 'o', 'u'];
    let count = 0;
    for (const char of str) {
        if(char === 'a' ||char === 'e'||char === 'i'||char === 'o'||char === 'u'){
            count++;
        }
    }
    return count;
}
console.log(checkNoOfVowels("The quick brown fox jumps over the lazy dog"));