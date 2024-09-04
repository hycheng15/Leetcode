#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // Convert nums1 and nums2 into set
        set<int> nums1_set(nums1.begin(), nums1.end());
        set<int> nums2_set(nums2.begin(), nums2.end());

        vector<vector<int>> answer;
        vector<int> temp;
        set_difference(nums1_set.begin(), nums1_set.end(), nums2_set.begin(), nums2_set.end(), inserter(temp, temp.end()));
        answer.push_back(temp);
        temp.clear();
        set_difference(nums2_set.begin(), nums2_set.end(), nums1_set.begin(), nums1_set.end(), inserter(temp, temp.end()));
        answer.push_back(temp);

        for (int i = 0; i < answer.size(); i++) {
            for (int j = 0; j < answer[i].size(); j++) {
                cout << answer[i][j] << ", ";
            }
            cout << endl;
        }

        return answer;
    }
};

int main() {
    Solution ans;
    vector<int> nums1 = {1,2,3,3};
    vector<int> nums2 = {2,4,6};
    ans.findDifference(nums1, nums2);
    return 0;
}