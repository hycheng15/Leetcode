#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_area = 0;
        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n; j++) {
                int area = (j - i) * min(height[i], height[j]);
                if ( area > max_area) {
                    max_area = area;
                }
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