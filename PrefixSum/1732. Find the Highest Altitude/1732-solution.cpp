#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> height;
        height.push_back(0);
        int gain_length = gain.size();

        for (int i = 0; i < gain_length; i++) {
            height.push_back(height[i] + gain[i]);
        }

        return *max_element(height.begin(), height.end());
    }
};

int main() {
    Solution ans;
    vector<int> gain = {-4,-3,-2,-1,4,3,2};
    cout << ans.largestAltitude(gain);
    return 0;
}