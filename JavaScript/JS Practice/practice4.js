function isLeapYear(anyYear) {
  if (anyYear % 100 === 0) {
    if (anyYear % 400 === 0) {
      console.log(`${anyYear} is a Leap year `);
    }
    else {
      console.log(`${anyYear} is NOT a Leap year `);
    }
  }
  else if (anyYear % 4 === 0) {
    console.log(`${anyYear} is a Leap year `);
  }
}

isLeapYear(2000);
isLeapYear(2020);
isLeapYear(1900);
