# 20. Valid Parentheses

🔗 Link: [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: String, Stack<br>

## Question

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

### Example 1

Input: s = "()"

Output: true

### Example 2

Input: s = "()[]{}"

Output: true

### Example 3

Input: s = "(]"

Output: false

### Example 4

Input: s = "([])"

Output: true

### Constraints

* `1 <= s.length <= 10^4`
* `s` consists of parentheses only `'()[]{}'`.

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

1. Using stack
2. Push the first char into the stack
3. Loop through the following chars
    * If the stack is not empty, check if the top align with current char
        * If yes, pop from the stack
        * If no, push the current char into the stack
    * If the stack is empty, push the current char into the stack directly
4. Check whether the stack is empty in the end, if is, valid

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 20-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`

#### Space Complexity

`O(n)`