#include <iostream>
#include <vector>
#include <limits.h> // INT_MAX

using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int nums_length = nums.size();

        int smallest = INT_MAX;
        int second_smallest = INT_MAX;

        if (nums_length <= 2) {
            return false;
        }
        else {
            for (int i = 0; i < nums_length; i++) {
                if (nums[i] > second_smallest) {
                    return true;
                }
                if (nums[i] < smallest) {
                    smallest = nums[i];
                }
                else if (nums[i] < second_smallest && nums[i] > smallest) {
                    second_smallest = nums[i];
                }  
            }
        }

        return false;
    }
};


int main() {
    Solution ans;
    vector<int> nums = {2, 1, 5, 0, 4, 6};
    ans.increasingTriplet(nums);
    return 0;
}