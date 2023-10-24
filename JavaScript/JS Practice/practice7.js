// Write a JavaScript program to calculate the days left before Christmas.

let currDate = new Date();
let christmasYear = currDate.getFullYear();

function remDaysCalculator(anyDate) {
  if (currDate.getMonth() === 11 && currDate.getDate() > 25) {
    christmasYear = christmasYear + 1;
  }
  let christmasDate = new Date(christmasYear, 11, 25);
  let msInaDay = 24 * 60 * 60 * 1000;

  let remainingDays = Math.ceil((christmasDate.getTime() - currDate.getTime()) / msInaDay);

  console.log(`${remainingDays} Days more before Christmas`);
}

remDaysCalculator(currDate);
