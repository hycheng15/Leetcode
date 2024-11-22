#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void findLarger(long long spell, vector<int>& potions, int start, int end, long long success, vector<int>& larger_idx) {
        if (start <= end) {
            int mid = start + (end - start) / 2;
            long long temp = spell * potions[mid];
            if (temp >= success) {
                larger_idx.push_back(mid);
                findLarger(spell, potions, start, mid - 1, success, larger_idx);
            }
            else {
                findLarger(spell, potions, mid + 1, end, success, larger_idx);
            }
        }
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int spells_size = spells.size();
        int potions_size = potions.size();
        vector<int> result;

        for (int i = 0; i < spells_size; i++) {
            vector<int> larger_idx;
            findLarger(spells[i], potions, 0, potions_size - 1, success, larger_idx);
            if (larger_idx.size() == 0) {
                result.push_back(0);
            }
            else {
                result.push_back(potions_size - *min_element(larger_idx.begin(), larger_idx.end()));
            }
        }

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}