#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int s_length = s.length();
        int right = 0;
        int left = 0;
        int longest_length = 1;
        vector<vector<bool>> dp(s_length, vector<bool>(s_length, false));
        dp[0][0] = true;

        for (int j = 1; j < s_length; j++) {
            dp[j][j] = true;
            for (int i = 0; i < j; i++) {
                if ((j - i <= 2 || dp[i+1][j-1]) && s[i] == s[j]) {
                    dp[i][j] = true;
                    if (j - i + 1 > longest_length) {
                        left = i;
                        right = j;
                        longest_length = j - i + 1;
                    }
                }
            }
        }

        return s.substr(left, longest_length);

        // if (longest_length <= 2) {
        //     return "none";
        // }
        // else {
        //     return s.substr(left, longest_length);
        // }
    }
};

int main() {
    Solution ans;

    return 0;
}