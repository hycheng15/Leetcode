#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_area = 0;
        int left = 0;
        int right = n-1;

        while (right > left) {
            int area = (right - left) * min(height[left], height[right]);
            if (area > max_area) {
                max_area = area;
            }
            if (min(height[left], height[right]) == height[left]) {
                left++;
            }
            else {
                right--;
            }
        }
        return max_area;
    }
};

int main() {
    Solution ans;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << ans.maxArea(height);
    return 0;
}