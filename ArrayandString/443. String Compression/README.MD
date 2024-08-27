# 443. String Compression

🔗 Link: [String Compression](https://leetcode.com/problems/string-compression/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: String, Two Pointers<br>

## Question

Given an array of characters `chars`, compress it using the following algorithm:

Begin with an empty string `s`. For each group of *consecutive repeating characters* in `chars`:

* If the group's length is `1`, append the character to `s`.
* Otherwise, append the character followed by the group's length.

The compressed string `s` should not be returned separately, but instead, be stored in the input character array `chars`. Note that group lengths that are `10` or longer will be split into multiple characters in `chars`.

After you are done *modifying the input array*, return the *new length* of the array.

You must write an algorithm that uses only constant extra space.

### Example 1

Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

### Example 2

Input: chars = ["a"]
Output: Return 1, and the first character of the input array should be: ["a"]
Explanation: The only group is "a", which remains uncompressed since it's a single character.

### Example 3

Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".

### Constraints

* `1 <= chars.length <= 2000`
* `chars[i]` is a lowercase English letter, uppercase English letter, digit, or symbol.

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

1. Loop through the array
2. When encountering same character, `count++`
3. When encountering different character, write the previous character into the input array directly
    * We can do this because the string is being "compressed", so we won't overflow contents after that
    * If `count==1`, write only the character
    * Convert the int `count` to string using `to_string`, loop through each char and write
4. Be careful of the edge case:
    * Only one element in the array
    * When encountering the last element in the array    
5. Resize the array when all is completed

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 443-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)` for looping through the array

#### Space Complexity

`O(1)` for variables