# 162. Find Peak Element

🔗 Link: [Find Peak Element](https://leetcode.com/problems/find-peak-element/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Binary Search<br>

## Question

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array `nums`, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that `nums[-1] = nums[n] = -∞`. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in `O(log n)` time.

### Example 1

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

### Example 2

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.

### Constraints

* `1 <= nums.length <= 1000`
* `-2^31 <= nums[i] <= 2^31 - 1`
* `nums[i] != nums[i + 1]` for all valid `i`.

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

We want to find the local maximum, and since we know the following properties:
    1. `nums[i] != nums[i + 1]` for all valid `i`
    2. `nums[-1] = nums[n] = -∞`

We can use binary search to check if the current `nums[mid]` is larger than its neighbor.

If not and `nums[mid+1]` is larger, than we can find from the right half because we know that there must be a local max in the right half (assuming all elements are strictly increasing in the right half, and `nums[n] = -∞`). This also holds for the left half.

Be careful when handling the edges.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 162-solution-1.cpp (recursive method), 162-solution-2.cpp (better, with while loop)

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(logn)`

#### Space Complexity

`O(logn)` for the recursion method, due to recursion stack
`O(1)` for the while loop method