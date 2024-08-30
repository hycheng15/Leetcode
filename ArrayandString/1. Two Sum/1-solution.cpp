#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dictionary;
        int nums_length = nums.size();
        for (int i = 0; i < nums_length; i++) {
            // for duplicated numbers, remain the last index
            dictionary[nums[i]] = i;

        }

        for (int i = 0; i < nums_length; i++) {
            int complement = target - nums[i];
            if (dictionary.count(complement) && dictionary[complement] != i) {
                return {i, dictionary[complement]};
            }
        }
        return {};
    }
};

int main() {
    Solution ans;
    vector<int> nums = {0,4,3,0};
    ans.twoSum(nums, 0);
    return 0;
}