# 334. Increasing Triplet Subsequence

🔗 Link: [Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Greedy<br>

## Question

Given an integer array `nums`, return `true` if there exists a triple of indices `(i, j, k)` such that `i < j < k` and `nums[i] < nums[j] < nums[k]`. If no such indices exists, return `false`.

### Example 1

Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.

### Example 2

Input: nums = [5,4,3,2,1]
Output: false
Explanation: No triplet exists.

### Example 3

Input: nums = [2,1,5,0,4,6]
Output: true
Explanation: The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.

### Constraints

* `1 <= nums.length <= 5 * 10^5`
* `-2^31 <= nums[i] <= 2^31 - 1`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. There might be a edge case where the length of `nums <=2`, so we cannot find three indices

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

Greedy

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

1. Use one variable `A` to store the smallest number seen so far, and another `B` to store the second smallest number seen so far
2. If finding another number greater than `B`, return `true`
3. See note.jpg

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 334-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)` for looping through the array

#### Space Complexity

`O(1)` for the variables `smallest` and `second_smallest`