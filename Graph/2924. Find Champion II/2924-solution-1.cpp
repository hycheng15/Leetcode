#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void dfs(int node, vector<bool> &visited, vector<vector<int>> &adjacency_list) {
        for (int i = 0; i < adjacency_list[node].size(); i++) {
            int neighbor = adjacency_list[node][i];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                dfs(neighbor, visited, adjacency_list);
            }
        }
    }
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adjacency_list(n);
        int edges_size = edges.size();

        for (int i = 0; i < edges_size; i++) {
            adjacency_list[edges[i][0]].push_back(edges[i][1]);
        }

        for (int i = 0; i < n; i++) {
            vector<bool> visited(n, false);
            visited[i] = true;
            dfs(i, visited, adjacency_list);

            if (find(visited.begin(), visited.end(), false) == visited.end()) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution ans;

    return 0;
}