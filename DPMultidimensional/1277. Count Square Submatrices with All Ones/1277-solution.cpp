#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size()));
        int ans = 0;
        int matrix_row = matrix.size();
        int matrix_col = matrix[0].size();

        for (int i = 0; i < matrix_row; i++) {
            dp[i][0] = matrix[i][0];
            ans += dp[i][0];
        }

        for (int j = 0; j < matrix_col; j++) {
            dp[0][j] = matrix[0][j];
            ans += dp[0][j];
        }

        for (int i = 1; i < matrix_row; i++) {
            for (int j = 1; j < matrix_col; j++) {
                if (matrix[i][j] == 1) {
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                }
                else {
                    dp[i][j] = 0;
                }
                ans += dp[i][j];
            }
        }

        if (matrix[0][0] == 1) {
            ans -= 1;
        }

        return ans;
    }
};
