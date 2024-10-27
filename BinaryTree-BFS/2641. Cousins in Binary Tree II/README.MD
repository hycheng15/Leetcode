# 2641. Cousins in Binary Tree II

🔗 Link: [Cousins in Binary Tree II](https://leetcode.com/problems/cousins-in-binary-tree-ii/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Hash Table, Tree, Depth-First Search, Breadth-First Search, Binary Tree<br>

## Question

Given the `root` of a binary tree, replace the value of each node in the tree with the sum of all its cousins' values.

Two nodes of a binary tree are cousins if they have the same depth with different parents.

Return the `root` of the modified tree.

Note that the depth of a node is the number of edges in the path from the root node to it.

### Example 1

Input: root = [5,4,9,1,10,null,7]
Output: [0,0,0,7,7,null,11]
Explanation: The diagram above shows the initial binary tree and the binary tree after changing the value of each node.
- Node with value 5 does not have any cousins so its sum is 0.
- Node with value 4 does not have any cousins so its sum is 0.
- Node with value 9 does not have any cousins so its sum is 0.
- Node with value 1 has a cousin with value 7 so its sum is 7.
- Node with value 10 has a cousin with value 7 so its sum is 7.
- Node with value 7 has cousins with values 1 and 10 so its sum is 11.

### Example 2

Input: root = [3,1,2]
Output: [0,0,0]
Explanation: The diagram above shows the initial binary tree and the binary tree after changing the value of each node.
- Node with value 3 does not have any cousins so its sum is 0.
- Node with value 1 does not have any cousins so its sum is 0.
- Node with value 2 does not have any cousins so its sum is 0.

### Constraints

* The number of nodes in the tree is in the range `[1, 10^5]`.
* `1 <= Node.val <= 10^4`

### Follow-up

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

1. For a node, the value sum of its cousins equal to the value sum of that depth - its value - its siblings value
2. Run bfs once to calculate each level's total sum, and record it to the vector
3. Run bfs again, this time for each parent, change the value of its child to be "the value sum of that depth - its value - its siblings value"
4. Change the value of root to 0, since the root does not have any cousin

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 2641-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(V+E)` (bfs)

#### Space Complexity

`O(V)` for the bfs queue and `O(h)` for the `level_sum` vector