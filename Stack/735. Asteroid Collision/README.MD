# 735. Asteroid Collision

🔗 Link: [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/description)<br>
💡 Difficulty: Medium<br>
🛠️ Topics: Array, Stack, Simulation<br>

## Question

We are given an array `asteroids` of integers representing asteroids in a row.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

### Example 1

Input: asteroids = [5,10,-5]
Output: [5,10]
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.

### Example 2

Input: asteroids = [8,-8]
Output: []
Explanation: The 8 and -8 collide exploding each other.

### Example 3

Input: asteroids = [10,2,-5]
Output: [10]
Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.

### Constraints

* `2 <= asteroids.length <= 10^4`
* `-1000 <= asteroids[i] <= 1000`
* `asteroids[i] != 0`

---

## UMPIRE Method

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs. 
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. Special case: if an asteroid is going left (<0) and another is going right (>0), they will not collide

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category

### Plan
> - Sketch visualizations and write pseudocode
> - Walk through a high level implementation with an existing diagram

#### Method One

1. Maintain a stack, push asteroid inside if 
  * The stack is empty
  * The stack's top asteroid is the same direction
  * The stack's top asteroid is different direction, but they are not colliding
2. If none of the condition is match, compare the asteroid **recursively** to check whether to pop from the stack or to push.

#### Method Two

Same as above but no recursion needed (use `while`)

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 735-solution-1.cpp, 735-solution-2.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`, where `n` is the length of the input list. Each asteroid is processed once.

#### Space Complexity

`O(n)`, for storing asteroids in the stack.