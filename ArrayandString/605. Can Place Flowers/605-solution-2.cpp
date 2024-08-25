#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {
            bool left = i == 0 || flowerbed[i - 1] == 0;
            bool right = i == flowerbed.size() - 1 || flowerbed[i + 1] == 0;

            if (left && right && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                n -= 1;
            }
        }
        if (n <= 0) {
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