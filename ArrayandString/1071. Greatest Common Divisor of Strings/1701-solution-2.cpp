#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string result = "";
        if ((str1 + str2) == (str2 + str1)) {
            int gcd_length = gcd(str1.length(), str2.length());
            result = str1.substr(0, gcd_length);
        }
        return result;
    }
};

int main() {
    Solution ans;
    cout << ans.gcdOfStrings("ABCABC", "ABC");
    return 0;
}