# 2542. Maximum Subsequence Score

🔗 Link: [Maximum Subsequence Score](https://leetcode.com/problems/maximum-subsequence-score/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Greedy, Sorting, Heap (Priority Queue)<br>

## Question

You are given two 0-indexed integer arrays `nums1` and `nums2` of equal length `n` and a positive integer `k`. You must choose a subsequence of indices from `nums1` of length `k`.

For chosen indices `i0, i1, ..., ik - 1`, your score is defined as:

* The sum of the selected elements from `nums1` multiplied with the minimum of the selected elements from `nums2`.
* It can defined simply as:` (nums1[i0] + nums1[i1] +...+ nums1[ik - 1]) * min(nums2[i0] , nums2[i1], ... ,nums2[ik - 1])`.

Return the maximum possible score.

A subsequence of indices of an array is a set that can be derived from the set `{0, 1, ..., n-1}` by deleting some or no elements.

### Example 1

Input: nums1 = [1,3,3,2], nums2 = [2,1,3,4], k = 3
Output: 12
Explanation: 
The four possible subsequence scores are:
- We choose the indices 0, 1, and 2 with score = (1+3+3) * min(2,1,3) = 7.
- We choose the indices 0, 1, and 3 with score = (1+3+2) * min(2,1,4) = 6. 
- We choose the indices 0, 2, and 3 with score = (1+3+2) * min(2,3,4) = 12. 
- We choose the indices 1, 2, and 3 with score = (3+3+2) * min(1,3,4) = 8.
Therefore, we return the max score, which is 12.

### Example 2

Input: nums1 = [4,2,3,1,1], nums2 = [7,5,10,9,6], k = 1
Output: 30
Explanation: 
Choosing index 2 is optimal: nums1[2] * nums2[2] = 3 * 10 = 30 is the maximum possible score.

### Constraints

* `n == nums1.length == nums2.length`
* `1 <= n <= 10^5`
* `0 <= nums1[i], nums2[j] <= 10^5`
* `1 <= k <= n`

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

Hard! Sorting + pq

1. Make the corresponding elements of `nums1` and `nums2` into pair `{nums2[i], nums1[i]}`, and store the pairs into a vector
2. Sort the vector using `nums2[i]` in descending order
3. Get the first k pair from the vector, calculate current result and `k_sum`
    * Store the first k `nums1[i]` into a priority queue, so that when we process to the next pair, we can greedily decrease the sum with the smallest `nums1[i]` we have so far
4. Loop through the remaining pair one by one, since we sort the vector<pair> in descending order, replacing the previous pairs with the current one will still make the current one having the smallest `nums2[i]`
    * Pop the first element from pq, and substract it from `k_sum`
    * Add the current `nums1[i]` into the pq
    * Calculate the update the result


### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 2542-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(nlogn)`

#### Space Complexity

`O(n)`