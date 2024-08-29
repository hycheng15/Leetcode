# 392. Is Subsequence

🔗 Link: [Is Subsequence](https://leetcode.com/problems/is-subsequence/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Two Pointers, String, Dynamic Programming<br>

## Question

Given two strings `s` and `t`, return `true` if `s` is a subsequence of `t`, or `false` otherwise.

A *subsequence* of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "`ace`" is a subsequence of "`abcde`" while "`aec`" is not).

### Example 1

Input: s = "abc", t = "ahbgdc"
Output: true

### Example 2

Input: s = "axc", t = "ahbgdc"
Output: false

### Constraints

* `0 <= s.length <= 100`
* `0 <= t.length <= 10^4`
* `s` and `t` consist only of lowercase English letters.

### Follow-up

Suppose there are lots of incoming `s`, say `s1, s2, ..., sk` where `k >= 10^9`, and you want to check one by one to see if `t` has its subsequence. In this scenario, how would you change your code?

For each character in string `t`, create a dictionary where the key is the character and the value is a list of index that the character lies. 
Then when looping through the characters in string `s1, s2, s3, ...`, directly find the character using the dictionary and compare the index.

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

1. Since the string `s` and `t` is considerably small, we can have one loop traversing each character of string `s` and find same character in string `t`
2. We need another variabel `j_start` to record where we can start searching for character in `j 
3. Edge case
    * String `j` is empty while string `s` is not

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 392-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n^2)`

#### Space Complexity

`O(n)`