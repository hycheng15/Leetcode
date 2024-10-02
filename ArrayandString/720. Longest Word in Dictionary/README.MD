# 720. Longest Word in Dictionary

🔗 Link: [Longest Word in Dictionary](https://leetcode.com/problems/longest-word-in-dictionary/description/)<br>
💡 Difficulty: medium<br>
🛠️ Topics: Array, Hash Table, String, Trie, Sorting<br>

## Question

Given an array of strings `words` representing an English Dictionary, return the longest word in `words` that can be built one character at a time by other words in words.

If there is more than one possible answer, return the longest word with the smallest lexicographical order. If there is no answer, return the empty string.

Note that the word should be built from left to right with each additional character being added to the end of a previous word. 

### Example 1

Input: words = ["w","wo","wor","worl","world"]
Output: "world"
Explanation: The word "world" can be built one character at a time by "w", "wo", "wor", and "worl".

### Example 2

Input: words = ["a","banana","app","appl","ap","apply","apple"]
Output: "apple"
Explanation: Both "apply" and "apple" can be built from other words in the dictionary. However, "apple" is lexicographically smaller than "apply".

### Constraints

* `1 <= words.length <= 1000`
* `1 <= words[i].length <= 30`
* `words[i]` consists of lowercase English letters.

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

1. Sort the `words` so we can process the word from shortest to longest
2. Loop through the `words`, use an unordered set to keep track of possible solution (prefix) 
    * If the word `length == 1`, add it to the set
    * If word.substr(0, length-1) is in the set, add it to the set
3. Loop through the set (which are possible solutions), compare the length and lexicographical order to find the result

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 720-solution.cpp

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