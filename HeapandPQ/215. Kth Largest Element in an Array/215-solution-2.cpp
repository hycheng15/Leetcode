#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int nums_size = nums.size();
        int left = 0;
        int right = nums_size - 1;
        while (true) {
            // Get random pivot from range [left, right]
            int pivot_index = rand() % (right - left + 1) + left;
            int new_pivot_index = partition(nums, left, right, pivot_index);
            if (new_pivot_index == nums_size - k) {
                return nums[new_pivot_index];
            }
            // Search for the upper half
            else if (new_pivot_index < nums_size - k) {
                left = new_pivot_index + 1;
            }
            else {
                right = new_pivot_index - 1;
            }
        }
        
    }
private:
    int partition(vector<int> &nums, int left, int right, int pivot_index) {
        int pivot_num = nums[pivot_index];
        int stored_index = left;
        // Move the index to the right most
        swap(nums[pivot_index], nums[right]);

        for (int i = left; i < right; i++) {
            if (nums[i] < pivot_num) {
                swap(nums[i], nums[stored_index]);
                stored_index += 1;
            }
        }

        swap(nums[right], nums[stored_index]);
        return stored_index;
    }
};

int main() {
    Solution ans;

    return 0;
}