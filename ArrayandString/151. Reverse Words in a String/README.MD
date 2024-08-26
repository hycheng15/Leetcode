# 151. Reverse Words in a String

🔗 Link: [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Two Pointers, String<br>

## Question

Given an input string `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that `s` may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

### Example 1

Input: s = "the sky is blue"
Output: "blue is sky the"

### Example 2

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

### Example 3

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

### Constraints

* `1 <= s.length <= 10^4`
* `s` contains English letters (upper-case and lower-case), digits, and spaces ' '.
* There is at least one word in `s`.

### Follow-up

If the string data type is mutable in your language, can you solve it in-place with O(1) extra space?

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

#### Method 1

Loop through the string `s`, use a flag to document whether a word starts/ends and flip the flag when encountering space character under specific conditions. Use another vector to store the words, and then concat the words in the vector in reversed order.

#### Method 2

Loop through the string `s`, simply add character into `temp` string to document words. 
When encountering spaces, add `temp` string into `result` string in desired order.

#### Method 3 (In-place)

https://leetcode.com/problems/reverse-words-in-a-string/solutions/4884894/best-explanation-with-photos-without-extra-space-beats-100-in-time-95-in-space

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 151-solution-1.cpp, 151-solution-2.cpp, 151-solution-3.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

#### Space Complexity