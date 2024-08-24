#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string repeatStrings(string str, int times) {
        string result;
        result.reserve(str.size() * times);
        for (int i = 0; i < times; i++) {
            result += str;
        }
        return result;
    }

    string gcdOfStrings(string str1, string str2) {
        string gcd = "";
        if (str1 == str2) {
            return str1;
        }
        if (str1[0] != str2[0]) {
            return gcd;
        }
        int str1_length = str1.length();
        int str2_length = str2.length();
        for (int i = 0; i < min(str1_length, str2_length); i++) {
            string divisor = str1.substr(0, i+1);
            int divisor_length = divisor.length();
            if (str1_length % divisor_length == 0 && str2_length % divisor_length == 0) {
                if (repeatStrings(divisor, str1_length/divisor_length) == str1 && repeatStrings(divisor, str2_length/divisor_length) == str2) {
                    gcd = divisor;
                }
            }
        }
        return gcd;
    }
};

int main() {
    Solution ans;
    cout << ans.gcdOfStrings("ABCABC", "ABC");
    return 0;
}