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

        for (int i = 0; i < nums_length; i++) {
            if (hash_table.count(nums[i])) {
                int complement = k - nums[i];
                // If complement exists in the hash table
                if (hash_table.count(complement)) {
                    // If the complement is the same as nums[i]
                    if (complement == nums[i]) {
                        if (hash_table[complement] >= 2) {
                            hash_table[complement] = hash_table[complement] - 2;
                            operations++;
                            // Erase the key if the index vector is empty
                            if (hash_table[complement] == 0) { hash_table.erase(complement);}
                        }
                    }
                    else {
                        hash_table[complement] = hash_table[complement] - 1;
                        hash_table[nums[i]] = hash_table[nums[i]] - 1;
                        operations++;
                        // Erase the key if the index vector is empty
                        if (hash_table[complement] == 0) { hash_table.erase(complement);}
                        if (hash_table[nums[i]] == 0) { hash_table.erase(nums[i]);}
                    }
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