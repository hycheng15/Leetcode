#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:

    string longestWord(vector<string>& words) {
        int words_size = words.size();

        sort(words.begin(), words.end());
        set<string> word_prefix;
        for (int i = 0; i < words_size; i++) {
            int word_length = words[i].length();
            if (word_length == 1) {
                word_prefix.insert(words[i]);
            }
            else {
                string target = words[i].substr(0, word_length - 1);
                if (word_prefix.find(target) != word_prefix.end())
                {
                    word_prefix.insert(words[i]);
                }
            }
            
        }

        int max_size = INT_MIN;
        string result;
        for (auto it = word_prefix.begin(); it != word_prefix.end(); it++) {
            int result_size = (*it).length();
            if (result_size > max_size)
            {
                result = *it;
                max_size = result_size;
            }
            else if (result_size == max_size) {
                if (*it < result) {
                    result = *it;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}