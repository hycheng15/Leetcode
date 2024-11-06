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

        if (costs_size >= candidates * 2)
        {
            for (int i = 0; i < candidates; i++) {
                left.push(costs[i]);
                right.push(costs[costs_size - i - 1]);
            }
        }
        else {
            for (int i = 0; i < costs_size; i++) {
                pq.push(costs[i]);
            }
        }

        int upper_candidate = candidates - 1;
        int lower_candidate = costs_size - candidates - 2;

        for (int i = 1; i <= k; i++) {
            int lowest_cost = pq.top();
            cout << lowest_cost << endl;
            total_cost += lowest_cost;
            pq.pop();

            if (costs_size - i < candidates * 2)
            {
                continue;
            }
            else {
                // first portion
                if (lowest_pos - costs.begin() < candidates) {
                    costs.erase(lowest_pos);
                    upper_boundary += 1;
                    cout << "first portion" << endl;
                    cout << "upper_boundary: " << *upper_boundary << endl;
                    pq.push(*upper_boundary);
                }
                // last portion
                else {
                    costs.erase(lowest_pos);
                    lower_boundary -= 1;
                    cout << "last portion" << endl;
                    cout << "lower_boundary: " << *lower_boundary << endl;
                    pq.push(*lower_boundary);
                }
            }
        }

        return total_cost;
    }
};
int main() {
    Solution ans;

    return 0;
}