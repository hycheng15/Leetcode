# 328. Odd Even Linked List

🔗 Link: [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/description)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Linked List<br>

## Question

Given the `head` of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in `O(1)` extra space complexity and `O(n)` time complexity.

### Example 1

Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

### Example 2

Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]

### Constraints

* The number of nodes in the linked list is in the range `[0, 10^4]`.
* `-10^6 <= Node.val <= 10^6`

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

1. Maintain an "odd-chain" and an "even-chain" and loop through the linked list, if the node's index is odd, add it into the odd-chain, otherwise add it into the even-chain
2. Be remember to close the even-chain's last next, or there'll be a runtime error
3. Be careful of the edge case:
  * Only one node in the list
  * No node in the list
4. In the while loop, also be remember to check `ptr!= nullptr`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See xxxx-solution.cpp

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