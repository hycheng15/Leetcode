#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        int strs_size = strs.size();

        for (int i = 0; i < strs_size; i++) {
            string word = strs[i];
            sort(word.begin(), word.end());

            // The key already exists
            if (anagrams.find(word) != anagrams.end()) {
                anagrams[word].push_back(strs[i]);
            }
            else {
                anagrams[word] = {strs[i]};
            }
        }

        vector<vector<string>> result;
        for (auto it = anagrams.begin(); it != anagrams.end(); it++) {
            result.push_back(it->second);
        }

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}