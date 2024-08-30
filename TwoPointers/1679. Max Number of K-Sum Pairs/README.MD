# 1679. Max Number of K-Sum Pairs

🔗 Link: [Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Hash Table, Two Pointers, Sorting<br>

## Question

You are given an integer array `nums` and an integer `k`.

In one operation, you can pick *two numbers* from the array whose sum equals `k` and remove them from the array.

Return the maximum number of operations you can perform on the array.

### Example 1

Input: nums = [1,2,3,4], k = 5
Output: 2
Explanation: Starting with nums = [1,2,3,4]:
- Remove numbers 1 and 4, then nums = [2,3]
- Remove numbers 2 and 3, then nums = []
There are no more pairs that sum up to 5, hence a total of 2 operations.

### Example 2

Input: nums = [3,1,3,4,3], k = 6
Output: 1
Explanation: Starting with nums = [3,1,3,4,3]:
- Remove the first two 3's, then nums = [1,4,3]
There are no more pairs that sum up to 6, hence a total of 1 operation.

### Constraints

* `1 <= nums.length <= 10^5`
* `1 <= nums[i] <= 10^9`
* `1 <= k <= 10^9`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. There might be only one element in the array

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

#### Method 1

1. Similar to *two sum*, we loop through the array first and maintain a hash table `unordered_map<int, int>` to store the occurrence time of the number
2. Loop again the array and see whether the complement (`k - nums[i]`) appears in the hash table. If yes, `operations++` and we decrease `unordered_map[nums[i]]` `unordered_map[complement]` by 1 and delete the key if it becomes 0

#### Method 2

1. Similar to *two sum*, we loop through the array first and maintain a hash table `unordered_map<int, int> hash_table` to store the occurrence time of the number
2. Say `complement = k - nums[i]`. For a number `nums[i]`, the maximum removing operations we can perform is `min(hash_table(nums[i]), complement)`
3. If `complement == nums[i]`, the maximum removing operations we can perform is `hash_table(nums[i])/2`

#### Method 3

1. Sort the array first and use two pointers method

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1679-solution-1.cpp, 1679-solution-2.cpp, 1679-solution-3.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

#### Space Complexity