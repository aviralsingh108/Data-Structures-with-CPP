// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]

// Example 2:
// Input: nums = [1,1,2]
// Output: [1]

// Example 3:
// Input: nums = [1]
// Output: []

function duplicateArrayElements(arr) {
  const occurence = {};
  const result = [];
  arr.forEach((i) => {
    if (occurence[i]) {
      occurence[i] += 1;
    } else {
      occurence[i] = 1;
    }
  });
  for (const key in occurence) {
    if (occurence[key] > 1) result.push(key);
  }
  return result;
}

console.log(duplicateArrayElements([4, 3, 2, 7, 8, 2, 3, 1]));
console.log(duplicateArrayElements([1, 1, 2]));
console.log(duplicateArrayElements([1]));
