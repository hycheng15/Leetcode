#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string result;
        string temp = "";
        int i = 0;
        while (i < s.length()) {
            if (s[i] == ' ') {
                i++;
            }
            else {
                temp += s[i];
                // End of a word
                if (s[i+1] == ' ' || i == s.length() - 1) {
                    if (result == "") {
                        result = temp;
                        temp = "";
                    }
                    else {
                        result = temp + " " + result;
                        temp = "";
                    }
                }
                i++;
            }
        }

        cout << result;
        return result;
    }
};

int main() {
    Solution ans;
    ans.reverseWords(" the sky  is  blue  ");
    return 0;
}