# 1071. Greatest Common Divisor of Strings

🔗 Link: [Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Math, String<br>

## Question

For two strings `s` and `t`, we say "`t` divides `s`" if and only if `s = t + t + t + ... + t + t` (i.e., t is concatenated with itself one or more times).

Given two strings `str1` and `str2`, return the largest string `x` such that `x` divides both `str1` and `str2`.

### Example 1

Input: `str1` = "ABCABC", `str2` = "ABC"
Output: "ABC"

### Example 2

Input: `str1` = "ABABAB", `str2` = "ABAB"
Output: "AB"

### Example 3

Input: `str1` = "LEET", `str2` = "CODE"
Output: ""
 
### Constraints

* `1 <= str1.length, str2.length <= 1000`
* `str1` and `str2` consist of English uppercase letters.

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

1. We can first check whether the first character of both strings are the same. If it is not, it means that the two strings will not have gcd.
2. Then, we can also simply check if the two strings are the same.
3. Then, we can loop through the shorter string's substring to determine that
    * Whether the substring's length is a divisor of both string (if not, then it cannot divide and form `str1` and `str2`)
    * If is divisor, then check if the substring times `x` times is equal to both the string 

#### Method 2

1. If the two strings have common divisor, then combining them in whatever order will be the same. I.e., `str1str2` == `str2str1`
2. The length of gcd of two strings is the gcd of `str1.length()` and `str2.length()`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1071-solution-1.cpp and 1071-solution-2.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

#### Space Complexity