# 345. Reverse Vowels of a String

🔗 Link: [Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: <br>

## Question

Given a string `s`, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

### Example 1

Input: s = "hello"
Output: "holle"

### Example 2

Input: s = "leetcode"
Output: "leotcede"

### Constraints

* `1 <= s.length <= 3 * 10^5`
* `s` consist of printable ASCII characters.
---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

#### Method 1

1. In this question, we have to find out all vowels in the string, and substitude each vowels in reversed order. So if we have, in the second example, vowels `eeoe`, then in the output, the vowels should be `eoee`.
2. Since the vowels can be both uppercase and lowercase, we need to beware of it when writing our conditions

#### Method 2

Use two pointer method, one starting from start of the string `s` while another starting from the end of string `s`.
If both pointers encounter a vowel, swap the two vowels.

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

1. The first methods that comes up to my mind is that I will loop through the string two times. In the first time, when encounter a vowel, I will save the vowel into a vector. And in the second time I will again go through the string and at that time when I encounter a vowel I will substitute the vowel using the reversed order. For example, when in the zero index I will take the `i-1` from the previously saved vector and substitute that vowel

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 345-solution-1.cpp and 345-solution-2.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

O(n)

#### Space Complexity

O(1)