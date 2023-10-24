// Write a JavaScript program to find out if 1st January will be a Sunday between 2014 and 2050.

function isSunday() {
  for (let index = 2014; index <= 2050; index++) {
    let newDate = new Date(index, 0, 1);
    if (newDate.getDay() === 0) {
      // const newDate = firstJansIsSunday[index];
      console.log("1st Jan is Sunday of the the year :" + index);
      //   return firstJansIsSunday
    }
  }
}

// console.log(isSunday())
isSunday();
