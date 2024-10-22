#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <unordered_set>

using namespace std;

class Solution {
public:
    double dfs(string start_node, string end_node, unordered_map<string, vector<pair<string, double>>> &adjacency_list, unordered_set<string> &visited) {
        if (start_node == end_node) {
            return 1;
        }
        visited.insert(start_node);
        double ans = -1;
        // Loop through the start_node's neighbor
        for (int i = 0; i < adjacency_list[start_node].size(); i++) {
            string neighbor = adjacency_list[start_node][i].first;
            // Haven't visited the neighbor
            if (visited.find(neighbor) == visited.end()) {
                // Check if we can get to the end_node by its neighbor
                double temp_ans = dfs(neighbor, end_node, adjacency_list, visited);
                if (temp_ans != -1) {
                    ans = temp_ans * adjacency_list[start_node][i].second;
                    break;
                }
            }
        }
        return ans;
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        // node: { (neighbor1, weight), (neighbor2, weight), ...}
        unordered_map<string, vector<pair<string, double>>> adjacency_list;
        for (int i = 0; i < equations.size(); i++) {
            string start_node = equations[i][0];
            string end_node = equations[i][1];
            pair forward_path = make_pair(end_node, values[i]);
            pair backward_path = make_pair(start_node, 1/values[i]);

            if (adjacency_list.count(start_node) != 0)
            {
                adjacency_list[start_node].push_back(forward_path);
            }
            else {
                adjacency_list[start_node] = {forward_path};
            }
            if (adjacency_list.count(end_node) != 0) {
                adjacency_list[end_node].push_back(backward_path);
            }
            else {
                adjacency_list[end_node] = {backward_path};
            }
        }

        vector<double> result;
        // For each query, do dfs to from the start node to find the answer
        for (int i = 0; i < queries.size(); i++) {
            string start_node = queries[i][0];
            string end_node = queries[i][1];
            if (adjacency_list.count(start_node) == 0 || adjacency_list.count(end_node) == 0 ) {
                result.push_back(-1);
            }
            else if (start_node == end_node) {
                result.push_back(1);
            }
            else {
                unordered_set<string> visited;
                result.push_back(dfs(start_node, end_node, adjacency_list, visited));
            }
        }

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}