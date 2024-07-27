//54. Write a JavaScript program to check whether a given string contains an equal number of p's and t's.

function CheckEqualNoOfP_T(str) {
  let pCount = 0,
    tCount = 0;
  //   console.log(pCount, tCount);
  for (const char in str) {
    if (str[char] === "p") {
      pCount++;
    }
    else if (str[char] === "t") {
      tCount++;
    }
    // console.log(pCount, tCount);
  }
    console.log(pCount, tCount);

}

CheckEqualNoOfP_T("peter piper picked a peck of pickled peppers");
