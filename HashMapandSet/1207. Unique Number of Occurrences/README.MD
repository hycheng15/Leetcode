# 1207. Unique Number of Occurrences

🔗 Link: [Unique Number of Occurrences](https://leetcode.com/problems/unique-number-of-occurrences/description)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Array, Hash Table<br>

## Question

Given an array of integers `arr`, return `true` if the number of occurrences of each value in the array is unique or `false` otherwise.

### Example 1

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

### Example 2

Input: arr = [1,2]
Output: false

### Example 3

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

### Constraints

* `1 <= arr.length <= 1000`
* `-1000 <= arr[i] <= 1000`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

#### Method 1

1. Maintain a map `occurrence` and save each numbers' occurrence time
2. Convert the `occurrence` map's values into a vector
3. Convert the vector into a set
4. If vector's size equals to set's size, which means theres no duplicated occurrence number, return true
5. Else, return false

#### Method 2

This method saves more memory

1. Maintain a map `occurrence` and save each numbers' occurrence time
2. Maintain another map `unique_occurrence` and loop through each pair in `occurrence`. Check if the occurrence alreay exists in `unique_occurrence`
    * If yes, return false
    * If not, `unique_occurrence[value]++` 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1207-solution-1.cpp, 1207-solution-2.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`

#### Space Complexity

`O(n)`