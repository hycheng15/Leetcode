# 2215. Find the Difference of Two Arrays

🔗 Link: [Find the Difference of Two Arrays](https://leetcode.com/problems/find-the-difference-of-two-arrays/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Array, Hash Table<br>

## Question

Given two **0-indexed** integer arrays `nums1` and `nums2`, return a list `answer` of size `2` where:

`answer[0]` is a list of all distinct integers in `nums1` which are not present in `nums2`.
`answer[1]` is a list of all distinct integers in `nums2` which are not present in `nums1`.
Note that the integers in the lists may be returned in any order.

### Example 1

Input: nums1 = [1,2,3], nums2 = [2,4,6]
Output: [[1,3],[4,6]]
Explanation:
For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].
For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].

### Example 2

Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
Output: [[3],[]]
Explanation:
For nums1, nums1[2] and nums1[3] are not present in nums2. Since nums1[2] == nums1[3], their value is only included once and answer[0] = [3].
Every integer in nums2 is present in nums1. Therefore, answer[1] = [].

### Constraints

* `1 <= nums1.length, nums2.length <= 1000`
* `-1000 <= nums1[i], nums2[i] <= 1000`

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

1. Convert both the vectors into sets
2. use `set_difference` to find the difference of two sets, and save the result into `answer`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 2215-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(nlogn)` for `set_difference`

#### Space Complexity

`O(n)`