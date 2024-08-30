#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int string_length = s.length();
        string vowels = "aeiou";
        int window_sum = 0;

        // Get the initial window sum
        for (int i = 0; i < k; i++){
            if (vowels.find(s[i]) != string::npos) {
                window_sum += 1;
            }
        }
        int result = window_sum;

        // Slide the window
        int pointer = k;
        while(pointer < string_length) {
            if (vowels.find(s[pointer-k]) != string::npos) {
                cout << s[pointer - k] << ", " << pointer-k << endl;
                window_sum -= 1;
            }
            if (vowels.find(s[pointer]) != string::npos) {
                cout << s[pointer] << ", " << pointer << endl;
                window_sum += 1;
            }
            result = max(result, window_sum);
            cout << result << endl;
            pointer++;
        }

        return result;
    }
};

int main() {
    Solution ans;
    cout << ans.maxVowels("leetcode", 3);
    return 0;
}