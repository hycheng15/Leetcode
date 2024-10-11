#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // up, right, down, left {row, col}
    vector<pair<int, int>> neighbors = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int row, int col, int& area) {
        visited[row][col] = true;
        int grid_row = grid.size();
        int grid_col = grid[0].size();

        for (int i = 0; i < neighbors.size(); i++) {
            int neighbor_row = row + neighbors[i].first;
            int neighbor_col = col + neighbors[i].second;
            
            // Make sure the neighbor is inside the grid
            if (neighbor_row >= 0 && neighbor_row < grid_row && neighbor_col >= 0 && neighbor_col < grid_col) {
                // Check if is island and not visited before
                if (!visited[neighbor_row][neighbor_col] && grid[neighbor_row][neighbor_col] == 1) {
                    area += 1;
                    // Explore all its neighbors
                    dfs(grid, visited, neighbor_row, neighbor_col, area);
                }
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int grid_row = grid.size();
        int grid_col = grid[0].size();
        vector<vector<bool>> visited(grid_row, vector<bool>(grid_col, false));
        int largest_area = 0;
        
        for (int row = 0; row < grid_row; row++)
        {
            for (int col = 0; col < grid_col; col++) {
                // Water
                if (grid[row][col] == 0) {
                    visited[row][col] = true;
                    continue;
                }
                // New land starts
                else {
                    int area = 1;
                    if (!visited[row][col]) {
                        dfs(grid, visited, row, col, area);
                        largest_area = max(largest_area, area);
                    }
                }
            }
        }
        return largest_area;
    }
};

int main() {
    Solution ans;

    return 0;
}