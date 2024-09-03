# 1004. Max Consecutive Ones III

🔗 Link: [Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Binary Search, Sliding Window, Prefix Sum<br>

## Question

Given a binary array `nums` and an integer `k`, return the maximum number of consecutive 1's in the array if you can flip at most `k` `0`'s.

### Example 1

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,<ins>**1**,1,1,1,1,**1**</ins>]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

### Example 2

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,<ins>1,1,**1**,**1**,1,1,1,**1**,1,1</ins>,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

### Constraints

* `1 <= nums.length <= 10^5`
* `nums[i]` is either `0` or `1`.
* `0 <= k <= nums.length`

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
1. Have two pointers `left=0` and `right=-1`
2. Create a while loop that slides through the array
    * If the next number is 1 (`nums[right+1]==1`), then expand the window and increase the result by 1
    * If the next number is 0 (`nums[right+1]==0`) and we still have zeros to flip (`k>0`), expand the window and increase the result by 1
    * If the next number is 0 (`nums[right+1]==0`) and we DON'T have zeros to flip (`k<=0`), we move the left pointer by one step, increase `k` by one as we encounter a zero, and decrease the result by 1

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1004-solution.cpp

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