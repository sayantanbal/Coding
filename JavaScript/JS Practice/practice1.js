let currDate = new Date()

const dayList = ["Sunday","Monday","Tuesday","Wednesday ","Thursday","Friday","Saturday"];
//getDay() returns a number. marking 0 as sunday and continue.


let currDay = dayList[currDate.getDay()]
// console.log(currDay);

let currHour = currDate.getHours()
console.log(currHour);
let currMinute = currDate.getMinutes()
console.log(currMinute);
let currSecond = currDate.getSeconds()
console.log(currSecond);
let currMilisec = currDate.getMilliseconds()

let am_pm = ""
if (currHour > 0 && currHour < 12) {
    am_pm = "AM"
}
else if (currHour === 12 ) {
    am_pm = "Noon"
}
else if (currHour > 12) {
    am_pm = "PM"
}



console.log(`Current Time is ${currHour}${am_pm} : ${currMinute} : ${currSecond} : ${currMilisec}`);


console.log(`Current Time is ${currHour}${am_pm} : ${currMinute} : ${currSecond} : ${currMilisec}`);
