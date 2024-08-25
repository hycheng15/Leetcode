# 605. Can Place Flowers

🔗 Link: [Can Place Flowers](https://leetcode.com/problems/can-place-flowers/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Array, Greedy<br>

## Question

You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array `flowerbed` containing `0`'s and `1`'s, where `0` means empty and `1` means not empty, and an integer `n`, return `true` if `n` new flowers can be planted in the `flowerbed` without violating the no-adjacent-flowers rule and `false` otherwise.

### Example 1

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

### Example 2

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false


### Constraints

* `1 <= flowerbed.length <= 2 * 10^4`
* `flowerbed[i]` is `0` or `1`.
* There are no two adjacent flowers in flowerbed.
* `0 <= n <= flowerbed.length`

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

#### Method 1

1. See note.jpg
2. Be careful for edge cases:
    * Only one flowerbed
    * No flowers to be planted

#### Method 2
1. Check `left` is ok, `right` is ok, and `current` is 0
2. `left` is ok means
    * It is the first flowerbed, or
    * `flowerbed[i-1]` == 0
3. `right` is ok means
    * It is the last flowerbed, or
    * `flowerbed[i+1]` == 0

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 605-solution-1.cpp and 605-solution-2.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

Time complexity is O(n), where `n` is the length of the flowerbed. 
Since we loop through the vector `flowerbed`.

#### Space Complexity

Space complexity is O(1)