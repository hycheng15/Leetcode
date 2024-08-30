# 1456. Maximum Number of Vowels in a Substring of Given Length

🔗 Link: [Maximum Number of Vowels in a Substring of Given Length](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: String, Sliding Window<br>

## Question

Given a string `s` and an integer `k`, return the *maximum number* of vowel letters in any substring of `s` with length `k`.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

### Example 1

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.

### Example 2

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.

### Example 3

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.

### Constraints

* `1 <= s.length <= 10^5`
* `s` consists of lowercase English letters.
* `1 <= k <= s.length`

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

1. Much the same as "643. Maximum Average Subarray I", using sliding window
2. Be aware of how to find whether a character exists in an array
    * `vowels.find(s[pointer-k]) != string::npos`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1456-solution.cpp

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