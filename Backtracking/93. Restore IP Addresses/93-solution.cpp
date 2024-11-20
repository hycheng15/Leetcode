#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> helper(string s, int remaining) {
        vector<string> temp = {};
        if (remaining == 1) {
            if (!s.empty() && s.length() <= 3 && stoi(s) <= 255 && (s.length() == 1 || s[0] != '0')) {
                temp.push_back(s);
            }
            return temp;
        }
        for (int i = 1; i <= 3; i++) {
            if (s.size() >= i) {
                string current = s.substr(0, i);
                if (stoi(current) <= 255 && (current.length() == 1 || current[0] != '0')) {
                    vector<string> remaining_ip = helper(s.substr(i, s.length()-i), remaining - 1);
                    if (remaining_ip.size() == 0) {
                        continue;
                    }
                    for (int j = 0; j < remaining_ip.size(); j++) {
                        temp.push_back(current + "." + remaining_ip[j]);
                    }
                }
            }
        }
        return temp;
    }
    vector<string> restoreIpAddresses(string s) {
        if (s.length() < 4 || s.length() > 12) return {};
        return helper(s, 4);
    }
};

int main() {
    Solution ans;

    return 0;
}