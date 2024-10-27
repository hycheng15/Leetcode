#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int result = 0;
        int grid_row = grid.size();
        int grid_col = grid[0].size();
        vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        vector<vector<int>> new_grid = grid;
        while (true) {
            int becomeRotten = 0;
            for (int row = 0; row < grid_row; row++) {
                for (int col = 0; col < grid_col; col++) {
                    if (grid[row][col] == 2) {
                        for (int i = 0; i < 4; i++) {
                            int neighbor_row = row + direction[i].first;
                            int neighbor_col = col + direction[i].second;
                            if (neighbor_row >= 0 && neighbor_row < grid_row && neighbor_col >= 0 && neighbor_col < grid_col) {
                                if (grid[neighbor_row][neighbor_col] == 1) {
                                    becomeRotten += 1;
                                    new_grid[neighbor_row][neighbor_col] = 2;
                                }
                            }
                        }
                    }
                }
            }
            if (becomeRotten == 0) {
                break;
            }
            grid = new_grid;
            result += 1;
        }

        for (int row = 0; row < grid_row; row++) {
            if (find(grid[row].begin(), grid[row].end(), 1) != grid[row].end()) {
                return -1;
            }
        }
        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}