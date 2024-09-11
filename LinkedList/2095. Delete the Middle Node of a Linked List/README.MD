# 2095. Delete the Middle Node of a Linked List

🔗 Link: [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Linked List, Two Pointers<br>

## Question

You are given the head of a `linked` list. Delete the middle node, and return the `head` of the modified linked list.

The middle node of a linked list of size `n` is the `⌊n / 2⌋th` node from the start using 0-based indexing, where `⌊x⌋` denotes the largest integer less than or equal to `x`.

For `n = 1, 2, 3, 4, and 5`, the middle nodes are `0, 1, 1, 2, and 2`, respectively.

### Example 1

Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]
Explanation:
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node. 

### Example 2

Input: head = [1,2,3,4]
Output: [1,2,4]
Explanation:
The above figure represents the given linked list.
For n = 4, node 2 with value 3 is the middle node, which is marked in red.

### Example 3

Input: head = [2,1]
Output: [2]
Explanation:
The above figure represents the given linked list.
For n = 2, node 1 with value 1 is the middle node, which is marked in red.
Node 0 with value 2 is the only node remaining after removing node 1.

### Constraints

* The number of nodes in the list is in the range `[1, 10^5]`.
* `1 <= Node.val <= 10^5`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. What if there's only one node in the linked list? -> return a nullptr

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

#### Method One

1. Traverse through the linked list once to get the size of the linked list
2. Calculate the mid point using the size
3. Traverse again the list, get the previous node and next node of the linked list, then delete the mid node

#### Method Two (Fast and Slow Pointer)

See note.jpeg
1. Use fast and slow pointer, the fast pointer moves two times faster than the slow pointer
2. Hence, when the fast pointer reaches the end of the list, the slow pointer is the middle of the list
3. This is faster since we only need to traverse the list once

#### Method Two

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 2095-solution-1.cpp, 2095-solution-2.cpp, 

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