#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int costs_size = costs.size();
        long long total_cost = 0;
        priority_queue<int, vector<int>, greater<int>> left;
        priority_queue<int, vector<int>, greater<int>> right;
        int left_pos = 0;
        int right_pos = costs_size - 1;

        for (int i = 0; i < k; i++) {

            while (left.size() < candidates && left_pos <= right_pos) {
                left.push(costs[left_pos]);
                left_pos += 1;
            }
            while (right.size() < candidates && right_pos >= left_pos) {
                right.push(costs[right_pos]);
                right_pos -= 1;
            }

            int left_small = left.size() > 0 ? left.top() : INT_MAX;
            int right_small = right.size() > 0 ? right.top() : INT_MAX;

            if (left_small <= right_small) {
                total_cost += left_small;
                left.pop();
            }
            else {
                total_cost += right_small;
                right.pop();
            }
        }

        return total_cost;
    }
};
int main() {
    Solution ans;

    return 0;
}