let friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];
let bigger = friends[0];

for (let i = 0; i < friends.length; i++) {
  if (friends[i].length > bigger.length) {
    bigger = friends[i];
  }
}
console.log(bigger);