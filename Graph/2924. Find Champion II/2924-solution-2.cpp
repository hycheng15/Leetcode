#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> in_degree(n, 0);
        for (auto &edge : edges) {
            in_degree[edge[1]] += 1;
        }

        int result = -1;
        for (int i = 0; i < n; i++) {
            if (in_degree[i] == 0) {
                if (result == -1) {
                    result = i;
                }
                else {
                    return -1;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}