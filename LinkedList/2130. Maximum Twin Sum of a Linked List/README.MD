# 2130. Maximum Twin Sum of a Linked List

🔗 Link: [Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Linked List, Two Pointers, Stack<br>

## Question

In a linked list of size `n`, where `n` is even, the `ith` node (**0-indexed**) of the linked list is known as the twin of the `(n-1-i)th` node, if `0 <= i <= (n / 2) - 1`.

For example, if `n = 4`, then node `0` is the twin of node `3`, and node `1` is the twin of node `2`. These are the only nodes with twins for `n = 4`.
The twin sum is defined as the sum of a node and its twin.

Given the head of a linked list with even length, return the maximum twin sum of the linked list.

### Example 1

Input: head = [5,4,2,1]
Output: 6
Explanation:
Nodes 0 and 1 are the twins of nodes 3 and 2, respectively. All have twin sum = 6.
There are no other nodes with twins in the linked list.
Thus, the maximum twin sum of the linked list is 6. 

### Example 2

Input: head = [4,2,2,3]
Output: 7
Explanation:
The nodes with twins present in this linked list are:
- Node 0 is the twin of node 3 having a twin sum of 4 + 3 = 7.
- Node 1 is the twin of node 2 having a twin sum of 2 + 2 = 4.
Thus, the maximum twin sum of the linked list is max(7, 4) = 7. 

### Example 3

Input: head = [1,100000]
Output: 100001
Explanation:
There is only one node with a twin in the linked list having twin sum of 1 + 100000 = 100001.

### Constraints

* The number of nodes in the list is an even integer in the range `[2, 10^5]`.
* `1 <= Node.val <= 10^5`

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

#### Method One (Vector)

Space is `O(n)`

See note.png
1. Maintain another vector, traverse the list from `[0, n/2-1]` and store the value into corresponding index of the vector
2. Traverse the list from `[n/2, n-1]`, and add the value into `vector[n-i-1]`
3. Find max element

#### Method Two (Fast-Slow Pointer + Stack)

Space is `O(n)`
Stack works because it is LIFO

1. Use fast and slow pointer until fast reaches the end, store the value into a **stack** while traversing slow pointer
2. Move slow pointer further, pop from the stack and add up the value
3. Check max in each round

#### Method Three (Fast-Slow Pointer + Reverse)

Space is `O(1)`
Stack works because it is LIFO

1. Use fast and slow pointer to split the list into half
2. Reverse the second half list
3. Loop through both the list and add up the value, find max in each round

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 2130-solution-1.cpp, 2130-solution-2.cpp, 2130-solution-3.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`

#### Space Complexity

`O(n)`, `O(n)`, `O(1)`