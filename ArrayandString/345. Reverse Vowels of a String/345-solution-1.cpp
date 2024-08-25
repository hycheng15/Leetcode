#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        for (int i = 0; i < s.length(); i++) {
            char lower = tolower(s[i]);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels.push_back(s[i]);
            }
        }

        // Reverse the vector
        reverse(vowels.begin(), vowels.end());

        int vowels_pointer = 0;
        for (int i = 0; i < s.length(); i++) {
            char lower = tolower(s[i]);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                s[i] = vowels[vowels_pointer];
                vowels_pointer += 1;
            }
        }

        cout << s;
        return s;
    }
};

int main() {
    Solution ans;
    ans.reverseVowels("LEetcOde");
    return 0;
}