#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int nums_length = nums.size();
        vector<int> forward_sum;
        forward_sum.push_back(0);

        for (int i = 0; i < nums_length - 1; i++) {
            forward_sum.push_back(forward_sum[i] + nums[i]);
        }

        // reverse the nums to get reversed_sum
        vector<int> reversed_sum;
        reversed_sum.push_back(0);
        reverse(nums.begin(), nums.end());
        for (int i = 0; i < nums_length - 1; i++) {
            reversed_sum.push_back(reversed_sum[i] + nums[i]);
        }
        // reverse the reversed_sum
        reverse(reversed_sum.begin(), reversed_sum.end());

        for (int i = 0; i < nums_length; i++) {
            if (forward_sum[i] == reversed_sum[i]) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution ans;
    vector<int> nums = {2,1,-1};
    cout << ans.pivotIndex(nums);
    return 0;
}