#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int strs_size = strs.size();
        string first = strs[0];
        string last = strs[strs_size - 1];
        string result = "";

        for (int i = 0; i < min(first.length(), last.length()); i++) {
            if (first[i] == last[i]) {
                result += first[i];
            }
            else {
                break;
            }
        }

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}