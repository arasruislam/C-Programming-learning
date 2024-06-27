function leapYear(year) {
  if (year % 4 === 0) {
    if (year % 100 === 0) {
      if (year % 400 === 0) {
        return "This year is leap year";
      } else {
        return "This year is not leap year";
      }
    } else {
      return "This year is leap year";
    }
  } else {
    return "This year is not leap year";
  }
}


console.log(leapYear(2020));
