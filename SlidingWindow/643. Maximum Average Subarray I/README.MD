# 643. Maximum Average Subarray I

🔗 Link: [Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Array, Sliding Window<br>

## Question

You are given an integer array `nums` consisting of `n` elements, and an integer `k`.

Find a *contiguous* subarray whose length is equal to `k` that has the *maximum average value* and return this value. Any answer with a calculation error less than `10^-5` will be accepted.

### Example 1

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

### Example 2

Input: nums = [5], k = 1
Output: 5.00000

### Constraints

* `n == nums.length`
* `1 <= k <= n <= 10^5`
* `-10^4 <= nums[i] <= 10^4`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. Numbers can be negative
2. Window size `k` must <= `nums`'s length
3. If not using sliding window approach, i.e., using two for loops, will cause TLE

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

See note.jpg
1. Initialize a `window_sum` to add `nums[0]` to `nums[k-1]`
2. Then, slide the window one element at a time, update the `window_sum` by substracting the first element in the window and new element coming
3. If `window_sum` is greater than `result`, update `result`
4. Return `result/k`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 643-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`

#### Space Complexity

`O(1)`