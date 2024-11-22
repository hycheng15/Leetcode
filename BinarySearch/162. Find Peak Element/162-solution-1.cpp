#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int binarySearch(vector<int> & nums, int start, int end) {
        int mid = start + (end - start) / 2;
        // Deal with edges
        if (mid == 0) {
            if (nums.size() == 1) return mid;
            if (nums[mid] > nums[mid + 1]) return mid;
            else return binarySearch(nums, mid + 1, end);
        }

        if (mid == nums.size()-1) {
            if (nums.size() == 1) return mid;
            if (nums[mid] > nums[mid-1]) return mid;
            else return binarySearch(nums, start, mid-1);
        }

        if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
            return mid;
        }
        else if (nums[mid-1] > nums[mid]) {
            return binarySearch(nums, start, mid - 1);
        }
        else {
            return binarySearch(nums, mid + 1, end);
        }
    }
    int findPeakElement(vector<int>& nums) {
        return binarySearch(nums, 0, nums.size() - 1);
    }
};

int main() {
    Solution ans;

    return 0;
}