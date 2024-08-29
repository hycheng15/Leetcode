# 283. Move Zeroes

🔗 Link: [Move Zeroes](https://leetcode.com/problems/move-zeroes/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Array, Two Pointers<br>

## Question

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

### Example 1

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

### Example 2

Input: nums = [0]
Output: [0]

### Constraints

* `1 <= nums.length <= 10^4`
* `-2^31 <= nums[i] <= 2^31 - 1`

### Follow-up

Could you minimize the total number of operations done?

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

#### Method One - O(n^2)
1. Use one pointer `i` to loop through the array and find `0`.
2. When a `0` is found, use another pointer `j` to traverse through elements after the `0`, find the first element that is not `0`
3. Swap the two elements, continue the loop

#### Method Two - O(n)

1. Use one pointer `left` and another `right`
    * `left` is used to record the place that a swap will take place
2. Loop through the array with `right`, when `nums[right] != 0`, swap `nums[left]` and `nums[right]`
3. `left++`


### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 283-solution-1.cpp, 283-solution-2.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

Method 1: `O(n^2)`, since we have two loops
Method 1: `O(n)`

#### Space Complexity

`O(1)`, no additional space is used