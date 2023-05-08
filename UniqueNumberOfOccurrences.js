//Unique Number of Occurrences using Javascript

function findUniqueOccurence(arr) {
  let result = true;
  let repeated = findOccurence(arr);
  console.log(repeated);
  const values = [];
  for (const key in repeated) {
    const value = repeated[key];
    if (values.includes(value)) {
      result = false;
    }
    values.push(value);
  }
  return result;
}

function findOccurence(arr) {
  let result = {};
  arr.forEach((item) => {
    if (result[item]) {
      result[item] += 1;
    } else {
      result[item] = 1;
    }
  });
  //   console.log(result);
  return result;
}

console.log(findUniqueOccurence([1, 2, 2, 1, 1, 3]));
console.log(findUniqueOccurence([1, 2]));
console.log(findUniqueOccurence([1, 2, 3]));
console.log(findUniqueOccurence([-3, 0, 1, -3, 1, 1, 1, -3, 10, 0]));
