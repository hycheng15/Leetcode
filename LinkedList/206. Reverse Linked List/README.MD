# 206. Reverse Linked List

🔗 Link: [Reverse Linked List]()<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Linked List, Recursion<br>

## Question

Given the `head` of a singly linked list, reverse the list, and return the reversed list.

### Example 1

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

### Example 2

Input: head = [1,2]
Output: [2,1]

### Example 3

Input: head = []
Output: []

### Constraints

* The number of nodes in the list is the range `[0, 5000]`.
* `-5000 <= Node.val <= 5000`

### Follow-up

A linked list can be reversed either iteratively or recursively. Could you implement both?

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

#### Method One (Iteration)

https://leetcode.com/problems/reverse-linked-list/solutions/803955/c-iterative-vs-recursive-solutions-compared-and-explained-99-time-85-space
1. Maintain three pointers, `current = head`, `previous = NULL`, and `nextNode = NULL`
2. Loop through the linked list until current becomes `nullptr`. Change the three pointers accordingly
3. As long as `current` becomes `NULL`, return the `previous` node

#### Method Two (Recursion)

1. The function basically does the same thing, but we write it into a recursive one

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 206-solution-1.cpp, 206-solution-2.cpp

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