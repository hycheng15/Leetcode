#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<string, int> rows;
        map<string, int> columns;

        int grid_size = grid.size();
        for (int i = 0; i < grid_size; i++) {
            string row = "";
            string col = "";
            for (int j = 0; j < grid_size; j++) {
                // Be remember to use "to_string"
                row += to_string(grid[i][j]);
                row += "-";
                col += to_string(grid[j][i]);
                col += "-";
            }

            rows[row] += 1;
            columns[col] += 1;
        }

        int result = 0;
        for (map<string, int>::iterator it = rows.begin(); it != rows.end(); it++) {
            if (columns.find(it->first) != columns.end()) {
                result += (it->second * columns.find(it->first)->second);
            }
        }

        return result;
    }
};

int main() {
    Solution ans;
    vector<vector<int>> grid = {{250,78,253},{334,252,253},{250,253,253}};
    // vector<vector<int>> grid = {{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};

    cout << ans.equalPairs(grid);
    return 0;
}