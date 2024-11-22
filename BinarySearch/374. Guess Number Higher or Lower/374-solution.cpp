#include <iostream>
#include <vector>

using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int helper(int left, int right) {
        // Use this instead of (left + right) / 2 to avoid int overflow!!!
        int mid = left + (right - left) / 2;
        // Mid is higher than than the picked number
        if (guess(mid) == -1) {
            return helper(left, mid - 1);
        }
        // Mid is lower than than the picked number
        else if (guess(mid) == 1) {
            return helper(mid + 1, right);

        }
        else {
            return mid;
        }
    }
    int guessNumber(int n) {
        return helper(1, n);
    }
};

int main() {
    Solution ans;

    return 0;
}