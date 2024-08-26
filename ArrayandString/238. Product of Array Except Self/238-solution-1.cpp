#include <iostream>
#include <vector>

using namespace std;

// Prefix product and suffix product
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int nums_length = nums.size();
        vector<int> suffix_product(nums_length);
        for (int i = nums_length - 1; i >= 0; i--) {
            if (i == nums_length - 1) {
                suffix_product[i] = 1;
            }
            else {
                suffix_product[i] = suffix_product[i + 1] * nums[i + 1];
            }
        }
        vector<int> prefix_product(nums_length);
        for (int i = 0; i < nums_length; i++)
        {
            if (i == 0) {
                prefix_product[i] = 1;
            }
            else {
                prefix_product[i] = prefix_product[i - 1] * nums[i - 1];
            }
        }

        vector<int> result(nums_length);
        for (int i = 0; i < nums_length; i++)
        {
            result[i] = suffix_product[i] * prefix_product[i];
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