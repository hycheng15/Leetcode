# 695. Max Area of Island

🔗 Link: [Max Area of Island](https://leetcode.com/problems/max-area-of-island/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Depth-First Search, Breadth-First Search, Union Find, Matrix<br>

## Question

You are given an `m x n` binary matrix `grid`. An island is a group of `1`'s (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

The area of an island is the number of cells with a value `1` in the island.

Return the maximum area of an island in `grid`. If there is no island, return `0`.

### Example 1

Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
Output: 6
Explanation: The answer is not 11, because the island must be connected 4-directionally.

### Example 2

Input: grid = [[0,0,0,0,0,0,0,0]]
Output: 0

### Constraints

* `m == grid.length`
* `n == grid[i].length`
* `1 <= m, n <= 50`
* `grid[i][j]` is either `0` or `1`.

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

1. Use DFS to explore the graph
2. Once we meet a `1` (island), use the `dfs` function to mark visited to `true` and check all its neighbors and keeps incrementing the area we can form (pass by reference)
3. After we finish current dfs, update the `largest_area`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 695-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(N*M)`

#### Space Complexity

* Visited vector takes `O(N*M)`
* DFS recursion stack takes, in the worst case, if all land cells are connected in a single island, the recursion depth will be equal to the number of cells `O(N*M)`