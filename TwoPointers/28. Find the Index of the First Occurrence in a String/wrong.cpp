#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ATTENTION: This solution will fail
// haystack = "mississippi"
// needle = "issip"
// Output: 4

class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystack_length = haystack.length();
        int needle_length = needle.length();

        int haystack_ptr = 0;
        int needle_ptr = 0;
        bool found = false;
        int result = -1;
        while (haystack_ptr < haystack_length) {
            if (haystack[haystack_ptr] == needle[needle_ptr]) {
                if (needle_ptr == 0) {
                    result = haystack_ptr;
                }
                if (needle_ptr == needle_length - 1) {
                    return result;
                }
                needle_ptr += 1;
                haystack_ptr += 1;
            }
            else {
                needle_ptr = 0;
                if (haystack[haystack_ptr] != needle[needle_ptr]) {
                    haystack_ptr += 1;
                }
            }
        }

        return -1;
    }
};

int main() {
    Solution ans;

    return 0;
}