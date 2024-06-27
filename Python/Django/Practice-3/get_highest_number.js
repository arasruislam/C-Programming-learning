let numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
let highest = numbers[0];

for (let i = 0; i < numbers.length; i++) {
  if (numbers[i] > highest) {
    highest = numbers[i];
  }
}

console.log(highest);