let arr = [
  2, 3, 1, 5, 4, 6, 8, 7, 9, 11, 10, 12, 14, 13, 17, 16, 15, 19, 20, 18,
];
const n = arr.length

for (let i = 0; i < n - 1; i++) {
  for (let j = i + 1; j < n; j++) {
    if (arr[i] > arr[j]) {
      let temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }
}

console.log(arr);
