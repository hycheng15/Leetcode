#include <iostream>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> bfs;
        vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int grid_row = grid.size();
        int grid_col = grid[0].size();
        int freshOrange = 0;

        for (int i = 0; i < grid_row; i++) {
            for (int j = 0; j < grid_col; j++) {
                if (grid[i][j] == 1) {
                    freshOrange += 1;
                }
                else if (grid[i][j] == 2) {
                    bfs.push(make_pair(i, j));
                }
            }
        }

        int time = 0;
        while (!bfs.empty() && freshOrange != 0) {
            int bfs_size = bfs.size();
            time += 1;
            for (int i = 0; i < bfs_size; i++) {
                pair<int, int> curr = bfs.front();
                int row = curr.first;
                int col = curr.second;
                bfs.pop();
                for (int i = 0; i < 4; i++) {
                    int neighbor_row = row + direction[i].first;
                    int neighbor_col = col + direction[i].second;
                    if (neighbor_row >= 0 && neighbor_row < grid_row && neighbor_col >= 0 && neighbor_col < grid_col) {
                        if (grid[neighbor_row][neighbor_col] == 1) {
                            freshOrange -= 1;
                            grid[neighbor_row][neighbor_col] = 2;
                            bfs.push(make_pair(neighbor_row, neighbor_col));
                        }
                    }
                }
            }
        }

        return freshOrange == 0 ? time : -1;
    }
};

int main() {
    Solution ans;

    return 0;
}