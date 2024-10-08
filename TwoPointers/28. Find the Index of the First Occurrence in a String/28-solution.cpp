#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystack_length = haystack.length();
        int needle_length = needle.length();
        for (int i = 0; i < haystack_length - needle_length + 1; i++) {
            string haystack_substr = haystack.substr(i, needle_length);
            if (haystack_substr == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution ans;

    return 0;
}