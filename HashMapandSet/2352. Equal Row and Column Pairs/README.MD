# 2352. Equal Row and Column Pairs

🔗 Link: [Equal Row and Column Pairs](https://leetcode.com/problems/equal-row-and-column-pairs/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Hash Table, Matrix, Simulation<br>

## Question

Given a 0-indexed `n x n` integer matrix `grid`, return the number of pairs `(ri, cj)` such that row `ri` and column `cj` are equal.

A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).

### Example 1

Input: grid = [[3,2,1],[1,7,6],[2,7,7]]
Output: 1
Explanation: There is 1 equal row and column pair:
- (Row 2, Column 1): [2,7,7]

### Example 2

Input: grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]
Output: 3
Explanation: There are 3 equal row and column pairs:
- (Row 0, Column 0): [3,1,2,2]
- (Row 2, Column 2): [2,4,2,2]
- (Row 3, Column 2): [2,4,2,2]

### Constraints

* `n == grid.length == grid[i].length`
* `1 <= n <= 200`
* `1 <= grid[i][j] <= 10^5`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. The order of the elements should be the same for the row and col to be considered the same

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

1. Maintain two maps `rows` and `columns`, with key `n0-n1-n2` and value = count of the key appear in each row/col
2. Base on the key of `rows`, find exact same key in `columns`. If found, multiply their value and add to result.
3. Be remember to use `to_string` to convert `int` to `string`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 2352-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n^2)`

#### Space Complexity

`O(n^2)`