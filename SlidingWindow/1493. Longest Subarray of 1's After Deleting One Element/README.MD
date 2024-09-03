# 1493. Longest Subarray of 1's After Deleting One Element

🔗 Link: [Longest Subarray of 1's After Deleting One Element](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: <br>

## Question

Given a binary array `nums`, you should delete one element from it.

Return the size of the longest non-empty subarray containing only `1`'s in the resulting array. Return `0` if there is no such subarray.

### Example 1

Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.

### Example 2

Input: nums = [0,1,1,1,0,1,1,0,1]
Output: 5
Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].

### Example 3

Input: nums = [1,1,1]
Output: 2
Explanation: You must delete one element.

### Constraints

* 1 <= nums.length <= 10^5
* nums[i] is either `0` or `1`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. Edge case: all zeros

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

See note.jpg
Similar to 1004. Max Consecutive Ones III (Set `k = 1` and return `max_result-1`)
1. Have three pointers `left=0`, `right=0`, and `zero_position`
2. Create a while loop that slides through the array
    * If the right number is 1 (`nums[right]==1`), then expand the window (`right++`)
    * If right is 0 (`nums[right]==0`) and we haven't delete a zero (`is_deleted == false`), set `is_deleted` to `true` and record current zero position to `zero_position`
    * If right is 0 (`nums[right]==0`) and we have already deleted a zero (`is_deleted == true`), we move the left pointer to `zero_position+1`
3. Calculate current `slide_size` (`right-left`) and compare to `max_size`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1493-solution.cpp

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