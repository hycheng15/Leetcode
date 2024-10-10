#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int rooms_size = rooms.size();
        vector<bool> visited(rooms_size, false);
        visited[0] = true;
        unordered_set<int> keys(rooms[0].begin(), rooms[0].end());

        while (!keys.empty()) {
            int key = *keys.begin();
            keys.erase(keys.begin());
            visited[key] = true;
            for (int i = 0; i < rooms[key].size(); i++) {
                if (!visited[rooms[key][i]]) {
                    keys.insert(rooms[key][i]);
                }
            }
        }

        return (find(visited.begin(), visited.end(), false) == visited.end());
    }
};

int main() {
    Solution ans;
    return 0;
}