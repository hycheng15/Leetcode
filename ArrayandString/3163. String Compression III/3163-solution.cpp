#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int word_length = word.length();

        char prefix = word[0];
        int count = 1;

        for (int i = 1; i < word_length; i++) {
            if (word[i] == prefix && count < 9) {
                count += 1;
            }
            else {
                comp += to_string(count) + prefix;
                prefix = word[i];
                count = 1;
            }
        }

        comp += to_string(count) + prefix;
        return comp;
    }
};

int main() {
    Solution ans;

    return 0;
}