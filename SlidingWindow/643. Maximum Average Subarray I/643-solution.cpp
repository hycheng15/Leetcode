#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int nums_length = nums.size();
        int window_sum = 0;

        // Get the initial window sum
        for (int i = 0; i < k; i++) {
            window_sum += nums[i];
        }
        double result = window_sum;

        // Slide the window by moving one element at a time
        // Substract the previous number and add the new number to window_sum
        int pointer = k;
        while (pointer < nums_length) {
            window_sum = window_sum - nums[pointer - k] + nums[pointer];
            if (window_sum > result) {
                result = window_sum;
            }
            pointer++;
        }

        return result / k;
    }
};

int main() {
    Solution ans;
    vector<int> nums = {1,12,-5,-6,50,3};
    cout << ans.findMaxAverage(nums, 4);
    return 0;
}