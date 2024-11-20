# 93. Restore IP Addresses

🔗 Link: [Restore IP Addresses](https://leetcode.com/problems/restore-ip-addresses/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: String, Backtracking<br>

## Question

A valid IP address consists of exactly four integers separated by single dots. Each integer is between 0 and 255 (inclusive) and cannot have leading zeros.

For example, "0.1.2.201" and "192.168.1.1" are valid IP addresses, but "0.011.255.245", "192.168.1.312" and "192.168@1.1" are invalid IP addresses.
Given a string `s` containing only digits, return all possible valid IP addresses that can be formed by inserting dots into `s`. You are not allowed to reorder or remove any digits in `s`. You may return the valid IP addresses in any order.

### Example 1

Input: s = "25525511135"
Output: ["255.255.11.135","255.255.111.35"]

### Example 2

Input: s = "0000"
Output: ["0.0.0.0"]

### Example 3

Input: s = "101023"
Output: ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]

### Constraints

* `1 <= s.length <= 20`
* `s` consists of digits only.

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

1. We can use backtracking to check if the remaining string can form a valid ip address
2. Write a helper function with string `s` and `remaining`, where `remaining` means the which segment of the IP the current string is forming
    * For the first 3 segments, enumerate possibilities of current segment with substring length 1 to 3, and check its validity
        * If valid, recursively call the helper function with remaining substring and `remaining - 1`
        * Then, concat the result, push into temp and return
    * For the last segment (`remaining == 1`), simply check its validity, push into temp and return

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 93-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

#### Space Complexity