# 1657. Determine if Two Strings Are Close

🔗 Link: [Determine if Two Strings Are Close](https://leetcode.com/problems/determine-if-two-strings-are-close/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Hash Table, String, Sorting, Counting<br>

## Question

Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two **existing** characters.
For example, a<ins>b</ins>cd<ins>e</ins> -> a<ins>e</ins>cd<ins>b</ins>

Operation 2: Transform **every** occurrence of one existing character into another existing character, and do the same with the other character.
For example, <ins>aa</ins>c<ins>abb</ins> -> <ins>bb</ins>c<ins>baa</ins> (all `a`'s turn into `b`'s, and all `b`'s turn into `a`'s)

You can use the operations on either string as many times as necessary.

Given two strings, `word1` and `word2`, return true if `word1` and `word2` are close, and false otherwise.

### Example 1

Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"

### Example 2

Input: word1 = "a", word2 = "aa"
Output: false
Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.

### Example 3

Input: word1 = "cabbba", word2 = "abbccc"
Output: true
Explanation: You can attain word2 from word1 in 3 operations.
Apply Operation 1: "cabbba" -> "caabbb"
Apply Operation 2: "caabbb" -> "baaccc"
Apply Operation 2: "baaccc" -> "abbccc"

### Constraints

* `1 <= word1.length, word2.length <= 10^5`
* word1 and word2 contain only lowercase English letters.

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

See note.jpg
1. If the length of two words are not the same, we cannot tranform one to another, return false
2. Only if the occurrence of each character is the same, then we can transform one to another. Thus, we have to calculate and compare
    * Whether the two words have the same character set
    * Whether the two words' occurrence of character are the same

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1657-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(nlogk)`, where `n` is the length of the words and `k` is the number of unique characters (which can be up to 26 for lowercase English letters)
    * Inserting an element into a map has a time complexity of `O(logk)` due to the underlying balanced tree structure. The loop runs `n` times, so the overall complexity is `O(nlogk)`.
    * Each `find` operation in a map is `O(logk)`. Since we have up to `k` unique characters to check, the total complexity is `O(klogk)`. In the worst case, `k` can be up to 26 (constant), so this remains quite manageable.
    * Constructing the vectors takes `O(k)`, and sorting them takes `O(klogk)`. As before, `k` is at most 26 in the worst case.

#### Space Complexity

`O(k)`