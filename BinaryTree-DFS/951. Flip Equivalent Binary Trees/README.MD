# 951. Flip Equivalent Binary Trees

🔗 Link: [Flip Equivalent Binary Trees](https://leetcode.com/problems/flip-equivalent-binary-trees/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Tree, Depth-First Search, Binary Tree<br>

## Question

For a binary tree `T`, we can define a flip operation as follows: choose any node, and swap the left and right child subtrees.

A binary tree `X` is flip equivalent to a binary tree `Y` if and only if we can make `X` equal to `Y` after some number of flip operations.

Given the roots of two binary trees `root1` and `root2`, return true if the two trees are flip equivalent or false otherwise.

### Example 1

Input: root1 = [1,2,3,4,5,6,null,null,null,7,8], root2 = [1,3,2,null,6,4,5,null,null,null,null,8,7]
Output: true
Explanation: We flipped at nodes with values 1, 3, and 5.

### Example 2

Input: root1 = [], root2 = []
Output: true

### Example 3

Input: root1 = [], root2 = [1]
Output: false

### Constraints

* The number of nodes in each tree is in the range `[0, 100]`.
* Each tree will have unique node values in the range `[0, 99]`.

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

1. DFS both the tree and maintain two maps `map<int, vector<int>>`, the map will record all descendant of the node (since the node value is unique)
2. If for any given node of both trees, they have the same descendant vector, than the two trees are considered equivalent
    * Need to sort the vector stored in the map before using `==` on `map`

#### Method 2

For any two nodes in the two trees (`node1` in `root1` and `node2` in `root2`):
    * If both nodes are null, they are trivially equivalent
    * If one node is null and the other is not, or their values are different, they can't be equivalent
    * Otherwise, we **recursively** check two possibilities:
        * **Without flipping**: The left child of `node1` is equivalent to the left child of `node2`, and the right child of `node1` is equivalent to the right child of `node2`.
        * **With flipping**: The left child of `node1` is equivalent to the right child of `node2`, and the right child of `node1` is equivalent to the left child of `node2`.
        
### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 951-solution-1.cpp, 952-solution-1.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

#### Space Complexity