# 104. Maximum Depth of Binary Tree

🔗 Link: [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree<br>

## Question

Given the `root` of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

### Example 1

Input: root = [3,9,20,null,null,15,7]
Output: 3

### Example 2

Input: root = [1,null,2]
Output: 2

### Constraints

* The number of nodes in the tree is in the range `[0, 10^4]`.
* `-100 <= Node.val <= 100`

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

Resursively find the number of child node for a node, get the max and return
1. Base case: no child node, return 0
2. Find max( 1 + leftChild, 1 + rightChild)

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 104-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`

#### Space Complexity

`O(1)`