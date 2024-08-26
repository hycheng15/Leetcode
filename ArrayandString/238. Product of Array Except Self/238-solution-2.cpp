#include <iostream>
#include <vector>

using namespace std;

// Prefix product and suffix product
// Space-optimized version
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int nums_length = nums.size();
        vector<int> result(nums_length);
        // Forwarded-order
        for (int i = 0; i < nums_length; i++)
        {
            if (i == 0) {
                result[i] = 1;
            }
            else {
                result[i] = result[i - 1] * nums[i - 1];
            }
        }
        // Reversed-order
        int suffix = 1;
        for (int i = nums_length - 1; i >= 0; i--) {
            if (i == nums_length - 1) {
                continue;
            }
            else {
                suffix *= nums[i + 1];
                result[i] *= suffix;
            }
        }
        return result;
    }
};

int main() {
    Solution ans;
    vector<int> nums = {1, 2, 3, 4};
    ans.productExceptSelf(nums);
    return 0;
}