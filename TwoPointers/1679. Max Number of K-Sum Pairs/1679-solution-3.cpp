#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int operations = 0;
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            if (nums[left] + nums[right] == k) {
                operations += 1;
                left += 1;
                right -= 1;
            }
            else if (nums[left] + nums[right] < k) {
                left += 1;
            }
            else if (nums[left] + nums[right] > k) {
                right -= 1;
            }
        }

        return operations;
    }
};

int main() {
    Solution ans;
    vector<int> nums = {3,1,3,4,3};
    cout << ans.maxOperations(nums, 6);
    return 0;
}