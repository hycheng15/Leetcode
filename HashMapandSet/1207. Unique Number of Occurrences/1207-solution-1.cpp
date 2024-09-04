#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Count the occurrence of each number
        map<int, int> occurrence;
        for (int i = 0; i < arr.size(); i++) {
            if (occurrence.find(arr[i]) != occurrence.end()) {
                occurrence[arr[i]] += 1;
            }
            else {
                occurrence[arr[i]] = 1;
            }
        }

        // Store the occurrence time into a vector
        vector<int> count_vec;
        for (map<int, int>::iterator it = occurrence.begin(); it != occurrence.end(); it++) {
            count_vec.push_back(it->second);
        }

        // Convert the vector into a set
        set<int> count_set(count_vec.begin(), count_vec.end());
        if (count_set.size() == count_vec.size()) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    Solution ans;
    vector<int> arr = {-3,0,1,-3,1,1,1,-3,10,0};
    cout << ans.uniqueOccurrences(arr);
    return 0;
}