#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int nums_length = nums.size();
        bool is_deleted = false;
        int left = 0;
        int right = 0;
        int zero_position;
        int slide_size;
        int result_size = INT_MIN;

        if (find(nums.begin(), nums.end(), 1) == nums.end()) {
            return 0;
        }
        while (left <= right && right < nums_length) {
            cout << "right: " << right << endl;
            cout << "left: " << left << endl;
            cout << "zero: " << zero_position << endl;

            if (nums[right] == 0 && !is_deleted) {
                is_deleted = true;
                zero_position = right;
            }
            else if (nums[right] == 0 && is_deleted) {
                left = zero_position + 1;
                zero_position = right;
            }
            slide_size = right - left;
            result_size = max(result_size, slide_size);
            right += 1;
        }

        if (result_size == INT_MIN) {
            return 0;
        }
        else {
            return result_size;
        }
    }
};

int main() {
    Solution ans;
    vector<int> nums = {1,0,0,0,0};
    cout << ans.longestSubarray(nums);
    return 0;
}