#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        s = " " + s; // append on space character before the s
        bool start_word = false;
        string current_word = "";
        vector<string> words;
        string result = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (s[i+1] != ' ') {
                    // flip the start_word flag if next char is not space char
                    start_word = !start_word;
                }
                continue;
            }
            else if (start_word == true) {
                current_word += s[i];
                if (s[i+1] == ' ' || i == s.length() - 1) {
                    words.push_back(current_word);
                    start_word = false;
                    current_word = "";
                }
            }
        }
        
        for (vector<string>::reverse_iterator it = words.rbegin(); it != words.rend(); ++it) {
            result += *it;
            if (it != words.rend() - 1) {
                result += " ";
            }
        }
        return result;
    }
};

int main() {
    Solution ans;
    ans.reverseWords("the sky is blue");
    return 0;
}