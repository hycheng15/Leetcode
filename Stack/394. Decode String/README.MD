# 394. Decode String

🔗 Link: [Decode String](https://leetcode.com/problems/decode-string/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: <br>

## Question

Given an encoded string, return its decoded string.

The encoding rule is: `k[encoded_string]`, where the `encoded_string` inside the square brackets is being repeated exactly `k` times. Note that `k` is guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, `k`. For example, there will not be input like `3a` or `2[4]`.

The test cases are generated so that the length of the output will never exceed `10^5`.

### Example 1

Input: s = "3[a]2[bc]"
Output: "aaabcbc"

### Example 2

Input: s = "3[a2[c]]"
Output: "accaccacc"

### Example 3

Input: s = "2[abc]3[cd]ef"
Output: "abcabccdcdcdef"

### Constraints

* `1 <= s.length <= 30`
* `s consists of lowercase English letters, digits, and square brackets '[]'.`
* `s is guaranteed to be a valid input.`
* `All the integers in s are in the range [1, 300].`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. Be careful: integers can have more than 1 digit, so will have to extract the "entire" number
  * Use `isdigit(my_stack.top())` 
2. Be remember to convert the number from string type to int type by substracting it by `0`

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

See note.jpg
1. Push the characters one by one into the stack.
2. When encountering a `]`, start popping out strings from the stack until encounter the `[`. 
3. Then start popping out the numbers. 
4. After the getting the numbers and the string (be remember to reverse them first), multiple the string by number of times and push the result into the stack. 
5. Continue until reach the end of the string `s`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 394-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

#### Space Complexity