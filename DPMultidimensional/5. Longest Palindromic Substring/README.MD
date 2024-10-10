# 5. Longest Palindromic Substring

🔗 Link: [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Two Pointers, String, Dynamic Programming<br>

## Question

Given a string `s`, return the longest palindromic substring in `s`.

### Example 1

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

### Example 2

Input: s = "cbbd"
Output: "bb"

### Constraints

* `1 <= s.length <= 1000`
* `s` consist of only digits and English letters.

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

Use a 2-D DP vector, `dp[i][j]` stores whether s[i, ..., j] is a palindrome
1. `dp[i][i]` for all `i` is true
2. `dp[i][j]` for all `i > j` is false
3. Fill the vector vertically
    * `dp[i][j]` will be true if `dp[i+1][j-1]` is true and `s[i] == s[j]`. This is because if the string between `i` and `j` is a palindrome and by extending the string with `s[i] == s[j]` will also form a palindrome
    * `dp[i][j]` will also be true if `j - i <= 2` and `s[i] == s[j]`. This deal with the condition where there is no middle string between `i` and `j`
4. When filling the `dp`, record the current longest index

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 5-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n^2)`

#### Space Complexity

`O(n^2)`