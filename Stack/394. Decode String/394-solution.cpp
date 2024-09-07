#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <ctype.h>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<char> my_stack;
        int s_length = s.length();

        for (int i = 0; i < s_length; i++) {
            if (s[i] != ']') {
                my_stack.push(s[i]);
            }
            else {
                string temp = "";
                // Get the string that is enclosed by []
                while(my_stack.top() != '[') {
                    temp += my_stack.top();
                    my_stack.pop();
                }
                
                // Pop the [
                my_stack.pop();
                
                // Get the number of times
                string times_string = "";
                while (!my_stack.empty() && isdigit(my_stack.top()))
                {
                    times_string += my_stack.top();
                    my_stack.pop();
                }
                reverse(times_string.begin(), times_string.end());
                int times = stoi(times_string);

                // Reverse the temp, multiply it by times time, and push back into the stack
                reverse(temp.begin(), temp.end());
                for (int j = 0; j < times; j++) {
                    for (int k = 0; k < temp.length(); k++) {
                        my_stack.push(temp[k]);
                    }
                }
            }
        }

        string result = "";
        while(!my_stack.empty()) {
            result += my_stack.top();
            my_stack.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution ans;
    ans.decodeString("100[leetcode]");
    return 0;
}