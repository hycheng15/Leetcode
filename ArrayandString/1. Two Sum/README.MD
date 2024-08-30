# 1. Two Sum

🔗 Link: [Two Sum](https://leetcode.com/problems/two-sum/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Array, Hash Table<br>

## Question

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Example 1

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

### Example 2

Input: nums = [3,2,4], target = 6
Output: [1,2]

### Example 3

Input: nums = [3,3], target = 6
Output: [0,1]

### Constraints

* `2 <= nums.length <= 10^4`
* `-10^9 <= nums[i] <= 10^9`
* `-10^9 <= target <= 10^9`
* Only one valid answer exists.

### Follow-up

Can you come up with an algorithm that is less than `O(n^2)` time complexity?

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. There may exist duplicated numbers
2. Numbers can be negative or zero

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

1. Create an empty hash table to store elements and their indices
2. Iterate through the array from left to right, add the current element `nums[i]` to the hash table with its index as the value
3. Iterate through the array from left to right, for each element `nums[i]`, calculate the *complement* by subtracting it from the target: `complement = target - nums[i]`
4. Check if the complement exists in the hash table. If it does, we have found a solution
5. Repeat steps 3-5 until we find a solution or reach the end of the array
6. f no solution is found, return an empty vector

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 1-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

This approach has a time complexity of `O(n)` since hash table lookups take constant time on average

#### Space Complexity

`O(n)` for the hash table