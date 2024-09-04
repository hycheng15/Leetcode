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
            occurrence[arr[i]]++;
        }

        // Check if the occurrence number has existed or not
        map<int, int> unique_occurrence;
        for (map<int, int>::iterator it = occurrence.begin(); it != occurrence.end(); it++) {
            if (unique_occurrence.find(it->second) != unique_occurrence.end()) {
                return false;
            }
            unique_occurrence[it->second]++;
        }
        return true;
    }
};

int main() {
    Solution ans;
    vector<int> arr = {-3,0,1,-3,1,1,1,-3,10,0};
    cout << ans.uniqueOccurrences(arr);
    return 0;
}