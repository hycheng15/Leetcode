# 2390. Removing Stars From a String

🔗 Link: [Removing Stars From a String](https://leetcode.com/problems/removing-stars-from-a-string/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: String, Stack, Simulation<br>

## Question

You are given a string s, which contains stars `*`.

In one operation, you can:

* Choose a star in `s`.
* Remove the closest non-star character to its left, as well as remove the star itself.

Return the string after all stars have been removed.

Note:
* The input will be generated such that the operation is always possible.
* It can be shown that the resulting string will always be unique.

### Example 1

Input: s = "leet*\*cod\*e"
Output: "lecoe"
Explanation: Performing the removals from left to right:
- The closest character to the 1st star is 't' in "leet\*\*cod\*e". s becomes "lee\*cod\*e".
- The closest character to the 2nd star is 'e' in "lee\*cod\*e". s becomes "lecod\*e".
- The closest character to the 3rd star is 'd' in "lecod*e". s becomes "lecoe".
There are no more stars, so we return "lecoe".

### Example 2

Input: s = "erase\*\*\*\*\*"
Output: ""
Explanation: The entire string is removed, so we return an empty string.

### Constraints

* `1 <= s.length <= 10^5`
* `s` consists of lowercase English letters and stars `*`.
* The operation above can be performed on `s`.

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

1. Maintain a stack that stores alphabet when encountering one
2. Once encounter a `*`, pop one element from the stack
3. Concate the elements in the stack to be a string, the result is the reverse of the string

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 2390-solution.cpp

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