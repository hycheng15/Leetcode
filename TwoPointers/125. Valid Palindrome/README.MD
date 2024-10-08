# 125. Valid Palindrome

🔗 Link: [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Two Pointers, String<br>

## Question

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.

### Example 1

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

### Example 2

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

### Example 3

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

### Constraints

* `1 <= s.length <= 2 * 10^5`
* `s` consists only of printable ASCII characters.

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

1. Use `isalnum()` to check whether the character should be included
2. Use `tolower()` to convert uppercase to lowercase
3. Reverse the string and compare whether they are the same

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 125-solution.cpp

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