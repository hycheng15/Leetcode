#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:

    void dfs(int node, int &result, vector<vector<int>> &adjacency_list, vector<bool> &visited) {
        node = abs(node);
        visited[node] = true;
        for (int i = 0; i < adjacency_list[node].size(); i++) {
            int neighbor = adjacency_list[node][i];
            // Traverse through its neighbors
            if (!visited[abs(neighbor)]) {
                // Check the path direction
                if (neighbor > 0) {
                    result += 1;
                }
                // Do dfs on the neighbor
                dfs(abs(neighbor), result, adjacency_list, visited);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<bool> visited(n, false);
        int result = 0;
        vector<vector<int>> adjacency_list(n);
        for (int i = 0; i < n - 1; i++) {
            int node_0 = connections[i][0];
            int node_1 = connections[i][1];
            adjacency_list[node_0].push_back(node_1);
            // Mark the reverse path to be negative so that we can track
            adjacency_list[node_1].push_back(-node_0);
        }

        // Do DFS, if one path is in reversed order
        // Add the result by one (need to reverse the paths)
        dfs(0, result, adjacency_list, visited);
        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}