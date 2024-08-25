#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // Two pointer method
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";

        while (start < end) {
            while (start < end && vowels.find(s[start]) == string::npos) {
                start++;
            }
            while (start < end && vowels.find(s[end]) == string::npos) {
                end--;
            }

            swap(s[start], s[end]);
            start++;
            end--;
        }

        return s;
    }
};

int main() {
    Solution ans;
    ans.reverseVowels("LEetcOde");
    return 0;
}