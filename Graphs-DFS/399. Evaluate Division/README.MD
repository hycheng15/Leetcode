# 399. Evaluate Division

🔗 Link: [Evaluate Division](https://leetcode.com/problems/evaluate-division/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, String, Depth-First Search, Breadth-First Search, Union Find, Graph, Shortest Path<br>

## Question

You are given an array of variable pairs `equations` and an array of real numbers `values`, where `equations[i] = [Ai, Bi]` and `values[i]` represent the equation `Ai / Bi = values[i]`. Each `Ai` or `Bi` is a string that represents a single variable.

You are also given some `queries`, where `queries[j] = [Cj, Dj]` represents the `jth` query where you must find the answer for `Cj / Dj = ?`.

Return the answers to all queries. If a single answer cannot be determined, return `-1.0`.

Note: The input is always valid. You may assume that evaluating the queries will not result in division by zero and that there is no contradiction.

Note: The variables that do not occur in the list of equations are undefined, so the answer cannot be determined for them.

### Example 1

Input: equations = [["a","b"],["b","c"]], values = [2.0,3.0], queries = [["a","c"],["b","a"],["a","e"],["a","a"],["x","x"]]
Output: [6.00000,0.50000,-1.00000,1.00000,-1.00000]
Explanation: 
Given: a / b = 2.0, b / c = 3.0
queries are: a / c = ?, b / a = ?, a / e = ?, a / a = ?, x / x = ? 
return: [6.0, 0.5, -1.0, 1.0, -1.0 ]
note: x is undefined => -1.0

### Example 2

Input: equations = [["a","b"],["b","c"],["bc","cd"]], values = [1.5,2.5,5.0], queries = [["a","c"],["c","b"],["bc","cd"],["cd","bc"]]
Output: [3.75000,0.40000,5.00000,0.20000]

### Example 3

Input: equations = [["a","b"]], values = [0.5], queries = [["a","b"],["b","a"],["a","c"],["x","y"]]
Output: [0.50000,2.00000,-1.00000,-1.00000]

### Constraints

* `1 <= equations.length <= 20`
* `equations[i].length == 2`
* `1 <= Ai.length, Bi.length <= 5`
* `values.length == equations.length`
* `0.0 < values[i] <= 20.0`
* `1 <= queries.length <= 20`
* `queries[i].length == 2`
* `1 <= Cj.length, Dj.length <= 5`
* `Ai, Bi, Cj, Dj` consist of lower case English letters and digits.

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

See note.png

1. Made each variable a node, forward edge to have weight "value" and backward edge to have weight "1/value"
2. Start from node `Ci`, do a DFS to check whether we can reach `Di`, multiply all the weight in the path to get the answer
    * Be aware of the termination condition of DFS, also how we bookkeeping during DFS
3. If we cannot find `Ci` or `Di` in the adjacency list, or there is no path from `Ci` to `Di`, then the answer cannot be determined

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 399-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

1. In the worst case, the dfs function runs in `O(n+m)`, where n is the number of nodes and m is the number of edges
2. calcEquation function
    * Constructing the adjacency list take `O(m)`, where m is the number of equations
    * For each query, the algorithm performs a dfs search. In the worst case, a dfs might explore all nodes, which would take `q * O(n+m)` time for each query

Hence, the overall time complexity would be `O(m + q * (n + m))`

#### Space Complexity

1. DFS recursion stack takes `O(n)` in the worst case
2. Adjacency list: `O(m)`
3. Visited set: `O(n)`