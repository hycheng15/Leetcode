# 875. Koko Eating Bananas

🔗 Link: [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/description/)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Binary Search<br>

## Question

Koko loves to eat bananas. There are `n` piles of bananas, the `ith` pile has `piles[i]` bananas. The guards have gone and will come back in `h` hours.

Koko can decide her bananas-per-hour eating speed of `k`. Each hour, she chooses some pile of bananas and eats `k` bananas from that pile. If the pile has less than `k` bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer `k` such that she can eat all the bananas within `h` hours.

### Example 1

Input: piles = [3,6,7,11], h = 8
Output: 4

### Example 2

Input: piles = [30,11,23,4,20], h = 5
Output: 30

### Example 3

Input: piles = [30,11,23,4,20], h = 6
Output: 23

### Constraints

* 1 <= piles.length <= 10^4
* piles.length <= h <= 10^9
* 1 <= piles[i] <= 10^9

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

Since the result must lie in the range `[1, max of pile]`, we can do binary search in this range and keep recording the smallest result possible

Need to be careful of:
1. In the while loop, the condition is `start <= end` because we must exhaustively test all potential values of k within the range
2. When division:
    * Using `ceil((double)piles[i] / mid)` works for most cases, but using floating-point arithmetic (double) can lead to precision issues and inefficiency. Integer division is sufficient here 
    * To calculate the hours needed for each pile, if `piles[i] % mid != 0`, then `(piles[i] + mid - 1) / mid` achieves the same as `ceil((double)piles[i] / mid)`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 875-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(logn)`

#### Space Complexity

`O(1)`