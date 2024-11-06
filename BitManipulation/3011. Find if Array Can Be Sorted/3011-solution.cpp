#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int nums_size = nums.size();
        vector<int> set_bits;
        for (int i = 0; i < nums_size; i++) {
            set_bits.push_back(countSetBits(nums[i]));
        }

        int start = 0;
        for (int i = 1; i < nums_size; i++) {
            if (set_bits[i] == set_bits[i-1]) {
                continue;
            }
            else {
                sort(nums.begin() + start, nums.begin() + i);
                start = i;
            }
        }
        if (start != nums_size - 1) {
            sort(nums.begin() + start, nums.end());
        }

        for (int i = 0; i < nums_size - 1; i++) {
            if (nums[i] > nums[i+1]) {
                return false;
            }
        }
        return true;
    }

private:
    // Brian Kernighan’s Algorithm to count set bits
    // https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
    int countSetBits(int num) {
        int count = 0;
        while (num != 0) {
            num = num & (num - 1);
            count += 1;
        }
        return count;
    }
};

int main() {
    Solution ans;

    return 0;
}