# 14. Longest Common Prefix

🔗 Link: [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: String, Trie<br>

## Question

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

### Example 1

Input: strs = ["flower","flow","flight"]
Output: "fl"

### Example 2

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

### Constraints

* `1 <= strs.length <= 200`
* `0 <= strs[i].length <= 200`
* `strs[i]` consists of only lowercase English letters.

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

1. Sort the input vector
2. Get the first and last word in the vector, this will be the shortest/lexicographically smallest and longest/lexicographically largest one
3. Compare character by character of these two words, if the same then add to the result; if not, break and return the result.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 14-solution.cpp

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