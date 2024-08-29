#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j_starting = 0;
        if (s.length() != 0 && t.length() == 0) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if (j_starting == t.length()) {
                return false;
            }
            for (int j = j_starting; j < t.length(); j++) {
                if (s[i] == t[j]) {
                    j_starting = j + 1;
                    break;
                }
                if (j == t.length() - 1) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution ans;
    cout << ans.isSubsequence("abc", "");
    return 0;
}