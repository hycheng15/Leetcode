#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int nums_length = nums.size();
        int left = 0;
        int right = -1;
        int max_result = 0;
        int window_result = 0;

        while(left < nums_length && right+1 < nums_length) {
            if (nums[right+1] == 1) {
                window_result += 1;
                max_result = max(max_result, window_result);
                right += 1;
            }
            else if (nums[right+1] == 0 && k > 0) {
                window_result += 1;
                max_result = max(max_result, window_result);
                k -= 1;
                right += 1;
            }
            else {
                window_result -= 1;
                max_result = max(max_result, window_result);
                if (nums[left] == 0) {
                    k += 1;
                }
                left += 1;
            }
        }

        return max_result;
    }
};

int main() {
    Solution ans;
    vector<int> nums = {0,0,0,1};
    cout << ans.longestOnes(nums, 4);
    return 0;
}