# 547. Number of Provinces

🔗 Link: [Number of Provinces](https://leetcode.com/problems/number-of-provinces/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Depth-First Search, Breadth-First Search, Union Find, Graph<br>

## Question

There are `n` cities. Some of them are connected, while some are not. If city `a` is connected directly with city `b`, and city `b` is connected directly with city `c`, then city `a` is connected indirectly with city `c`.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.

You are given an `n x n` matrix `isConnected` where `isConnected[i][j] = 1` if the ith city and the `jth` city are directly connected, and `isConnected[i][j] = 0` otherwise.

Return the total number of provinces.

### Example 1

Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
Output: 2

### Example 2

Input: isConnected = [[1,0,0],[0,1,0],[0,0,1]]
Output: 3

### Constraints

* `1 <= n <= 200`
* `n == isConnected.length`
* `n == isConnected[i].length`
* `isConnected[i][j]` is `1` or `0`.
* `isConnected[i][i] == 1`
* `isConnected[i][j] == isConnected[j][i]`

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

1. Maintain a `visited` vector and do dfs on the graph
2. The number of times dfs is performed is the number of province

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 547-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

In the worst case, each city will be visited exactly once, and for each city, the loop in DFS will check every other city once. This results in a time complexity of  `O(n^2)` , where `n` is the number of cities. This is because the graph is represented as an adjacency matrix of size  `n*n` , and each element in the matrix is checked at least once

#### Space Complexity

* The `visited` array, which takes `O(n)` space to store the visitation status of each city
* The recursive DFS function uses the call stack, and in the worst case (if the graph is fully connected), the depth of recursion will be `O(n)`