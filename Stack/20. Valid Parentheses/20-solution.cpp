#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        int s_length = s.length();

        paren.push(s[0]);

        for (int i = 1; i < s_length; i++) {
            if (!paren.empty()) {
                char top = paren.top();
                if (top == '(' && s[i] == ')' || top == '[' && s[i] == ']' || top == '{' && s[i] == '}') {
                    paren.pop();
                }
                else {
                    paren.push(s[i]);
                }
            }
            else {
                paren.push(s[i]);
            }

        }

        return paren.empty();
    }
};

int main() {
    Solution ans;

    return 0;
}