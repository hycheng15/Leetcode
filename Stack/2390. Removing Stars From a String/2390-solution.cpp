#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    string removeStars(string s) {
        int string_length = s.length();
        stack<char> result_stack;
        for (int i = 0; i < string_length; i++) {
            if (s[i] == '*') {
                result_stack.pop();
            }
            else {
                result_stack.push(s[i]);
            }
        }

        string result = "";
        while (!result_stack.empty()) {
            result += result_stack.top();
            result_stack.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution ans;
    cout << ans.removeStars("erase*****");
    return 0;
}