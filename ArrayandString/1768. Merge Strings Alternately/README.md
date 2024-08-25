# 1768. Merge Strings Alternately

🔗 Link: [Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Two Pointers, String<br>

## Question

You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

### Example 1

Input: `word1` = "abc", `word2` = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
`word1`:  a   b   c
`word2`:    p   q   r
merged: a p b q c r

### Example 2

Input: `word1` = "ab", `word2` = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
`word1`:  a   b 
`word2`:    p   q   r   s
merged: a p b q   r   s

### Example 3

Input: `word1` = "abcd", `word2` = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
`word1`:  a   b   c   d
`word2`:    p   q 
merged: a p b q c   d
 
### Constraints

* `1 <= word1.length, word2.length <= 100`
* `word1` and `word2` consist of lowercase English letters.

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. Since the constraints say that both the length of `word1` and `word2` is greater than 1, there will be no edge case that any word would be empty.

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

1. Traverse each string and pick character from each alternatively
2. See note.jpg

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1768-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

Since we traverse through both strings once, the time complexity is O(n)

#### Space Complexity

Since we create strings for `word1`, `word2`, and `result`, the space complexity is O(n), where n is the length of the string.