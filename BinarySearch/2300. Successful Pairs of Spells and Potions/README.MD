# 2300. Successful Pairs of Spells and Potions

🔗 Link: [Successful Pairs of Spells and Potions](https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Two Pointers, Binary Search, Sorting<br>

## Question

You are given two positive integer arrays `spells` and `potions`, of length `n` and `m` respectively, where `spells[i]` represents the strength of the `ith` spell and `potions[j]` represents the strength of the `jth` potion.

You are also given an integer `success`. A spell and potion pair is considered successful if the product of their strengths is at least `success`.

Return an integer array `pairs` of length `n` where `pairs[i]` is the number of potions that will form a successful pair with the `ith` spell.

### Example 1

Input: spells = [5,1,3], potions = [1,2,3,4,5], success = 7
Output: [4,0,3]
Explanation:
- 0th spell: 5 * [1,2,3,4,5] = [5,10,15,20,25]. 4 pairs are successful.
- 1st spell: 1 * [1,2,3,4,5] = [1,2,3,4,5]. 0 pairs are successful.
- 2nd spell: 3 * [1,2,3,4,5] = [3,6,9,12,15]. 3 pairs are successful.
Thus, [4,0,3] is returned.

### Example 2

Input: spells = [3,1,2], potions = [8,5,8], success = 16
Output: [2,0,2]
Explanation:
- 0th spell: 3 * [8,5,8] = [24,15,24]. 2 pairs are successful.
- 1st spell: 1 * [8,5,8] = [8,5,8]. 0 pairs are successful. 
- 2nd spell: 2 * [8,5,8] = [16,10,16]. 2 pairs are successful. 
Thus, [2,0,2] is returned.

### Constraints

* `n == spells.length`
* `m == potions.length`
* `1 <= n, m <= 10^5`
* `1 <= spells[i], potions[i] <= 10^5`
* `1 <= success <= 10^10`

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

Since we want to find the number of `spell * potion` combination that exceeds `success`, we can simply sort the `potions` array, and find the smallest `potion` that meet the condition

1. Once we sort the array, we want to find the smallest eligible element efficiently
2. We can use binary search to do this:
    * If `potions[mid]` is eligible, then we search for the smaller half to check if there's smaller eligible
    * If `potions[mid]` is not eligible, then we search for the larger half
    * Save eligibles' index into a vector `larger_idx`, and stop the recursion when `start < end`
3. Find the smallest index in `larger_idx`, and return how many elements are eligible using `potions_size - index`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 2300-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

#### Space Complexity