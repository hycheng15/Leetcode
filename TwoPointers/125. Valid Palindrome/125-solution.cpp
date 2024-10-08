#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctype.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string clean_s;
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                clean_s += tolower(s[i]);
            }
        }

        string reverse_s = clean_s;
        reverse(reverse_s.begin(), reverse_s.end());

        return (reverse_s == clean_s);
    }
};

int main() {
    Solution ans;

    return 0;
}