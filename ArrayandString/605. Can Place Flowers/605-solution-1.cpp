#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowerbed_size = flowerbed.size();
        int remaining_flowers = n;
        // No flower to be planted
        if (remaining_flowers == 0) {
            return true;
        }
        for (int i = 0; i < flowerbed_size; i++) {
            // If only one flowerbed
            if (flowerbed_size == 1) {
                if ((flowerbed[i] == 0 && n <= 1)) {
                    return true;
                }
                else {
                    return false;
                }
            }
            // The first flowerbed
            if (i == 0) {
                if ((flowerbed[i] == 0) && (flowerbed[i+1] == 0)) {
                    remaining_flowers -= 1;
                    flowerbed[i] = 1;
                    if (remaining_flowers == 0) {
                        break;
                    }
                }
            }
            // the last flowerbed
            else if (i == (flowerbed_size - 1)) {
                if ((flowerbed[i-1] == 0) && (flowerbed[i] == 0)) {
                    remaining_flowers -= 1;
                    flowerbed[i] = 1;
                    if (remaining_flowers == 0) {
                        break;
                    }
                }
            }
            else {
                if ((flowerbed[i-1] == 0) && (flowerbed[i] == 0) && (flowerbed[i+1] == 0)) {
                    remaining_flowers -= 1;
                    flowerbed[i] = 1;
                    if (remaining_flowers == 0) {
                        break;
                    }
                }
            }
        }
        if (remaining_flowers == 0) {
            return true;
        } 
        else {
            return false;
        }
    }
};

int main() {
    Solution ans;
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    ans.canPlaceFlowers(flowerbed, 2);
    return 0;
}