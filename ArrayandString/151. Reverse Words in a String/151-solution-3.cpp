#include <iostream>
#include <vector>
#include <algorithm>    // std::reverse

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int s_length = s.length();
        int i = 0;
        int left = 0;
        int right = 0;

        while (i < s_length) {
            if (s[i] == ' ') {
                i++;
            }
            else {
                // Copy Characters of a word to the correct position
                while (s[i] != ' ' && i < s_length) {
                    s[right] = s[i];
                    right++;
                    i++;
                }
                // Reverse the word
                reverse(&s[left], &s[right]);

                s[right++] = ' ';
                left = right;
            }
        }

        // Resize the string to remove trailing strings
        s.resize(right-1);
        cout << s;
        return s;
    }
};

int main() {
    Solution ans;
    ans.reverseWords(" the sky  is  blue  ");
    return 0;
}