# 215. Kth Largest Element in an Array

🔗 Link: [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Divide and Conquer, Sorting, Heap (Priority Queue), Quickselect<br>

## Question

Given an integer array `nums` and an integer `k`, return the `kth` largest element in the array.

Note that it is the `kth` largest element in the sorted order, not the `kth` distinct element.

Can you solve it without sorting?

### Example 1

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5

### Example 2

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4

### Constraints

* `1 <= k <= nums.length <= 10^5`
* `-10^4 <= nums[i] <= 10^4`

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

#### Method I - Max Heap

Convert the `nums` vector to a priority queue and pop out k-1 elements, then return the kth element

#### Method II - Quick Select

https://www.geeksforgeeks.org/quickselect-algorithm/

1. Select a random pivot from the `nums` vector
2. Partition the vector into element that are smaller than pivot and greater than pivot
    * Do this inplace
3. Return the index of pivot
    * If pivot's index is what we want, return that number
    * If pivot's index < what we want, set `left` to be pivot's index + 1
    * Else, set `right` to pivot's index - 1

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 215-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

##### Method I

`O(nlogn)`

##### Method II

* Best and Average Case: `O(n)`
* Worst Case: O(n^2)

The average performance is linear. 
However, in the worst case (very rare, especially with randomized pivot), the algorithm can degrade to `O(n^2)`.

#### Space Complexity

##### Method I

`O(n)`

##### Method II

`O(1)`
