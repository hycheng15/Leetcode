#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int max_candies = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++){
            if (candies[i] + extraCandies >= max_candies) {
                result[i] = true;
            }
            else {
                result[i] = false;
            }
        }
        for (vector<bool>::iterator it = result.begin(); it != result.end(); it++) {
            cout << *it;
        }
        return result;

    }
};

int main() {
    Solution ans;
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    ans.kidsWithCandies(candies, extraCandies);
    return 0;
}