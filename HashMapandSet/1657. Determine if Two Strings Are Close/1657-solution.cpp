#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int word1_length = word1.length();
        int word2_length = word2.length();

        // If the length of two words are different, return false
        if (word1_length != word2_length) {
            return false;
        }

        map<char, int> word1_map;
        map<char, int> word2_map;

        // Since we know now the length of both words are the same
        // We can do the for loop for just once
        for (int i = 0; i < word1_length; i++) {
            word1_map[word1[i]]++;
            word2_map[word2[i]]++;
        }
        
        // Check if each char that occurrs in word1 also appears in word2
        for (auto it = word1_map.begin(); it != word1_map.end(); it++) {
            if (word2_map.find(it->first) == word2_map.end()) {
                return false;
            }
        }
        // Check if each char that occurrs in word2 also appears in word1
        for (auto it = word2_map.begin(); it != word2_map.end(); it++) {
            if (word1_map.find(it->first) == word1_map.end()) {
                return false;
            }
        }

        // Check if the occurrence of characters are the same
        // Add the occurrence into vector and compare the vector
        vector<int> word1_occurrence;
        vector<int> word2_occurrence;

        for (auto it = word1_map.begin(); it != word1_map.end(); it++) {
            word1_occurrence.push_back(it->second);
        }
        // Check if each char that occurrs in word2 also appears in word1
        for (auto it = word2_map.begin(); it != word2_map.end(); it++) {
            word2_occurrence.push_back(it->second);
        }

        sort(word1_occurrence.begin(), word1_occurrence.end());
        sort(word2_occurrence.begin(), word2_occurrence.end());

        if (word1_occurrence != word2_occurrence)
        {
            return false;
        }

        return true;
    }
};

int main() {
    Solution ans;
    cout << ans.closeStrings("abccccdb", "baccdddd");
    return 0;
}