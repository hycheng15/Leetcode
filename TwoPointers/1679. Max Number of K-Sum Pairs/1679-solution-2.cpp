#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int operations = 0;
        int nums_length = nums.size();
        unordered_map<int, int> hash_table;

        for (int i = 0; i < nums_length; i++) {
            if (hash_table.count(nums[i])) {
                hash_table[nums[i]]++;
            }
            else {
                hash_table[nums[i]] = 1;
            }
        }

        for (unordered_map<int, int>::iterator it = hash_table.begin(); it != hash_table.end(); it++) {
            if (it->second > 0) {
                int complement = k - it->first;
                if (complement == it->first) {
                    int op = (it->second / 2);
                    operations += op;
                    it->second -= (op * 2);
                }
                else if (hash_table.count(complement) && hash_table[complement] > 0) {
                    int op = min(it->second, hash_table[complement]);
                    operations += op;
                    it->second -= op;
                    hash_table[complement] -= op;
                }
            }
        }
        
        return operations;
    }
};

int main() {
    Solution ans;
    vector<int> nums = {3,1,3,4,3};
    cout << ans.maxOperations(nums, 6);
    return 0;
}