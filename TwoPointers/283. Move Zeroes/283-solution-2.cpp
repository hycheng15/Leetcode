#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nums_length = nums.size();
        if (nums_length == 1) {
            return;
        }

        int left = 0;
        for (int right = 0; right < nums_length; right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }

        for (int i = 0; i < nums_length; i++) {
            cout << nums[i] << ", ";
        }
    }
};

int main() {
    Solution ans;
    vector<int> nums = {0,1,0,3,12};
    ans.moveZeroes(nums);
    return 0;
}