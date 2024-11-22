#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int nums_size = nums.size();
        int start = 0;
        int end = nums_size - 1;
        int mid;
        while (start < end) {
            mid = start + (end - start) / 2;
            if ((mid == 0 || nums[mid] > nums[mid-1]) && (mid == nums_size || nums[mid] > nums[mid+1])){
                return mid;
            }
            if (mid > 0 && nums[mid-1] > nums[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return start;
    }
};

int main() {
    Solution ans;

    return 0;
}