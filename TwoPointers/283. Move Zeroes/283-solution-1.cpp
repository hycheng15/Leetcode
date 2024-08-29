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
        
        for (int i = 0; i < nums_length; i++) {
            if (nums[i] == 0) {
                for (int j = i + 1; j < nums_length; j++) {
                    if (nums[j] != 0) {
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
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