#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int piles_size = piles.size();

        int start = 1;
        int end = piles[piles_size - 1];
        int result = end;

        // Be careful we use start <= end here
        while (start <= end) {
            int hour_needed = 0;
            int mid = start + (end - start) / 2;
            for (int i = 0; i < piles_size; i++) {
                // We use integer division here
                hour_needed += (piles[i] + mid - 1) / mid;
            }
            if (hour_needed <= h) {
                result = min(result, mid);
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        if (result == end && h >= 2) {
            result = min(result, end - 1);
        }
        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}