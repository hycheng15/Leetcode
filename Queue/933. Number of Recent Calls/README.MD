# 933. Number of Recent Calls

🔗 Link: [Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/description/)<br>
💡 Difficulty: Easy<br>
🛠️ Topics: Design, Queue, Data Stream<br>

## Question

You have a `RecentCounter` class which counts the number of recent requests within a certain time frame.

Implement the `RecentCounter` class:

* `RecentCounter()` Initializes the counter with zero recent requests.
* `int ping(int t)` Adds a new request at time `t`, where `t` represents some time in milliseconds, and returns the number of requests that has happened in the past `3000` milliseconds (including the new request). Specifically, return the number of requests that have happened in the inclusive range `[t - 3000, t]`.

It is guaranteed that every call to ping uses a strictly larger value of `t` than the previous call.

### Example 1

Input
["RecentCounter", "ping", "ping", "ping", "ping"]
[[], [1], [100], [3001], [3002]]
Output
[null, 1, 2, 3, 3]

Explanation
RecentCounter recentCounter = new RecentCounter();
recentCounter.ping(1);     // requests = [1], range is [-2999,1], return 1
recentCounter.ping(100);   // requests = [1, 100], range is [-2900,100], return 2
recentCounter.ping(3001);  // requests = [1, 100, 3001], range is [1,3001], return 3
recentCounter.ping(3002);  // requests = [1, 100, 3001, 3002], range is [2,3002], return 3

### Constraints

* `1 <= t <= 10^9`
* Each test case will call ping with strictly increasing values of `t`.
* At most `10^4` calls will be made to ping.

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

Since the time called ping is strictly increasing, we can maintain a queue (which is **sorted**) that stores the ping time. And then check whether the first element in the queue is in the interval, if it is not, simply pop the element. If the next element is in the interval, since the queue is in sorted order, all elements behind it are also in the interval. We can simply return the size of the queue.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)

See 933-solution.cpp

### Review
> - Re-check that your algorithm solves the problem by running through important examples
> - Go through it as if you are debugging it, assuming there is a bug

### Evaluate
> - Finish by giving space and run-time complexity
> - Discuss any pros and cons of the solution

#### Time Complexity

`O(n)`

#### Space Complexity

`O(n)`