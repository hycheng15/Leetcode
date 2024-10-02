# 49. Group Anagrams

🔗 Link: [Group Anagrams](https://leetcode.com/problems/group-anagrams/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Hash Table, String, Sorting<br>

## Question

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.

### Example 1

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

### Example 2

Input: strs = [""]

Output: [[""]]

### Example 3

Input: strs = ["a"]

Output: [["a"]]

### Constraints

* `1 <= strs.length <= 10^4`
* `0 <= strs[i].length <= 100`
* `strs[i] `consists of lowercase English letters.

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

1. Create an unordered map, where the key is the sorted version of any word, and the value is the anagrams
2. Loop through all the words in the input vector, sort the word and insert into the map
3. Form the result using the map

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 49-solution.cpp

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