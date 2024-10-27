#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <utility>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int maze_row = maze.size();
        int maze_col = maze[0].size();
        vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        pair<int, int> entrance_node = make_pair(entrance[0], entrance[1]);
        maze[entrance[0]][entrance[1]] = '+';

        // Run bfs from the entrance node and record the step
        queue<pair<int, int>> bfs;
        bfs.push(entrance_node);
        int step = -1;

        while (!bfs.empty()) {
            step += 1;
            int level_size = bfs.size();

            for (int i = 0; i < level_size; i++) {
                pair<int, int> curr = bfs.front();
                int curr_row = curr.first;
                int curr_col = curr.second;
                bfs.pop();

                // Check if is exit
                if (curr_row == 0 || curr_row == maze_row - 1 || curr_col == 0 || curr_col == maze_col - 1) {
                    if (curr != entrance_node) {
                        return step;
                    }
                }

                // Insert neighbor
                for (int j = 0; j < 4; j++) {
                    int row = curr.first + direction[j].first;
                    int col = curr.second + direction[j].second;
                    // Check if within the maze
                    if (row >= 0 && row <= maze_row - 1 && col >= 0 && col <= maze_col - 1) {
                        if (maze[row][col] == '.') {
                            pair<int, int> neighbor = make_pair(row, col);
                            bfs.push(neighbor);
                             // Mark the node to be '+', means it is visited
                            maze[row][col] = '+';
                        }
                    }
                }
            }
        }
        return -1;
    }
};
int main() {
    Solution ans;

    return 0;
}