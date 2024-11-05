#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minChanges(string s) {
        int s_length = s.length();
        int result = 0;
        for (int i = 0; i < s_length; i += 2) {
            if (s[i] != s[i+1]) {
                result += 1;
            }
        }

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}