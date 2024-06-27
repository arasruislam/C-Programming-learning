function monthlySaving(arr, livingCost) {
  // console.log(Array.isArray(arr));
//   console.log(typeof livingCost);

  if (Array.isArray(arr) == true && typeof livingCost != "number") {
    return "Invalid Input";
  }

  let totalIncome = 0;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] >= 3000) {
      remain = 3000 - 3000 * (20 / 100);
      totalIncome = totalIncome + remain;
    } else {
      totalIncome = totalIncome + arr[i];
    }
  }

  let totalSavingAmount = totalIncome - livingCost;

  if (totalSavingAmount >= 0) {
    return totalSavingAmount;
  } else {
    return "earn more";
  }
}

console.log(monthlySaving([900, 2700, 3400], "re"));
