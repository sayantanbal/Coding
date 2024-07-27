// 53. Write a JavaScript program to check whether the characters a and b are separated by exactly 3 places anywhere (at least once) in a given string.
// Sample Input: "Chainsbreak", "ab"
// Sample Output: true
// Sample Input: "pane borrowed", "ab"
// Sample Output: true
// Sample Input: "abCheck", "ab"
// Sample Output: false








function checkChars(str, chars) {
    // for (const char of str){
    //     if (char === chars[0]) {
    //         if (str[str.indexOf(char)+4] === chars[1] || str[str.indexOf(char)-4] === chars[1]) {
    //             return true;
    //         }
    //     }
    // }
    // return false;


    // using regex
    return /a...b/.test(str) || /b...a/.test(str)
}
console.log(checkChars("pane borrowed", "ab"));
console.log(checkChars("abCheck", "ab"));
console.log(checkChars("Chainsbreak", "ab"));