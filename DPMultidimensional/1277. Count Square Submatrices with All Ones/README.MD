# 1277. Count Square Submatrices with All Ones

🔗 Link: [Count Square Submatrices with All Ones](https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Dynamic Programming, Matrix <br>

## Question

Given a `m * n` matrix of ones and zeros, return how many square submatrices have all ones.

### Example 1

Input: matrix =
[
  [0,1,1,1],
  [1,1,1,1],
  [0,1,1,1]
]
Output: 15
Explanation: 
There are 10 squares of side 1.
There are 4 squares of side 2.
There is  1 square of side 3.
Total number of squares = 10 + 4 + 1 = 15.

### Example 2

Input: matrix = 
[
  [1,0,1],
  [1,1,0],
  [1,1,0]
]
Output: 7
Explanation: 
There are 6 squares of side 1.  
There is 1 square of side 2. 
Total number of squares = 6 + 1 = 7.

### Constraints

* `1 <= arr.length <= 300`
* `1 <= arr[0].length <= 300`
* `0 <= arr[i][j] <= 1`

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

1. Using two dimensional DP, `dp[i][j]` is the largest square up to current cell can form
    * `dp[0][j] = matrix[0][j]` and  `dp[i][0] = matrix[i][0]`, since the first row/col can only form 1x1 square
    * `dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1`
2. When calculating each `dp[i][j]`, add it to the ans

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1277-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(m*n)`

#### Space Complexity

`O(m*n)`