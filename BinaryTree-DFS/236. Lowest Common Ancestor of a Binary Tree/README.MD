# 236. Lowest Common Ancestor of a Binary Tree

🔗 Link: [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Tree, Depth-First Search, Binary Tree<br>

## Question

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes `p` and `q` as the lowest node in `T` that has both `p` and `q` as descendants (where we allow a node to be a descendant of itself).”

### Example 1

![](example1.png)

Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.

### Example 2

![](example2.png)

Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
Output: 5
Explanation: The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.

### Example 3

Input: root = [1,2], p = 1, q = 2
Output: 1

### Constraints

* The number of nodes in the tree is in the range `[2, 10^5]`.
* `-10^9 <= Node.val <= 10^9`
* All `Node.val` are unique.
* `p != q`
* `p` and `q` will exist in the tree.

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

1. Check if `root == p` or `root == q`, if is, then LCS must be root
2. There are two cases:
    * Case 1: `p` and `q` are on the same subtree, and either `p` is a anscestor of `q` or vice versa
    * Case 2: `p` and `q` are not on the same subtree
3. Hence, we iteratively find `p` and `q` in the left subtree and right subtree, and maintain a `left` treenode and `right` treenode
    * If `left` and `right` are both not null, this is case 2, return the root of current iteration
    * If `left` is not null and `right` is null, or `right` is not null and `left` is null, this is case 1, return the not null one

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 256-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`, where `n` is the number of nodes

#### Space Complexity

Because of the recursive call stack, space complexity is O(h), where h is the height of the tree