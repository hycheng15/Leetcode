#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<bool> &visited, int city) {
        visited[city] = true;
        for (int i = 0; i < isConnected[city].size(); i++) {
            if (isConnected[city][i] == 1 && !visited[i]) {
                dfs(isConnected, visited, i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int province_num = isConnected.size();
        vector<bool> visited(province_num, false);
        int result = 0;
        for (int i = 0; i < province_num; i++) {
            if (!visited[i]) {
                dfs(isConnected, visited, i);
                result += 1;
            }
        }
        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}