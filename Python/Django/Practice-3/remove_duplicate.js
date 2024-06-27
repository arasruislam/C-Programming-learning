let numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

let unique = numbers.filter((value, index, self) => {
  // console.log(value, "=>", index, "=>", self);
  //   console.log(self.indexOf(value));

  return self.indexOf(value) == index;
});

console.log(numbers);
