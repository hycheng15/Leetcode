# 3163. String Compression III

🔗 Link: [String Compression III](https://leetcode.com/problems/string-compression-iii/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: String<br>

## Question

Given a string `word`, compress it using the following algorithm:

* Begin with an empty string `comp`. While `word` is not empty, use the following operation:
    * Remove a maximum length `prefix` of word made of a single character `c` repeating at most 9 times.
    * Append the length of the prefix followed by `c` to `comp`.
* Return the string `comp`.

### Example 1

Input: word = "abcde"

Output: "1a1b1c1d1e"

### Example 2

Input: word = "aaaaaaaaaaaaaabb"

Output: "9a5a2b"

### Constraints

### Follow-up

* `1 <= word.length <= 2 * 10^5`
* `word` consists only of lowercase English letters.

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


Record prefix and count
    * Once current character does not equal to prefix, append prefix and count to `comp` and update prefix and count
    * If current character equals to prefix
        * If count < 9, then count++
        * Else append prefix and count, and update prefix and count


### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 3162-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`

#### Space Complexity

`O(n)` worst case