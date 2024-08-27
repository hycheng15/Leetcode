#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    void writeToVector(vector<char>& chars, int& pointer, int& count, char& temp) {
        if (count == 1) {
            chars[pointer] = temp;
            pointer += 1;
        }
        else {
            chars[pointer] = temp;
            pointer += 1;
            string count_string = to_string(count);
            for (char ch : count_string) {
                chars[pointer] = ch;
                pointer += 1;
            }
        }
    }

    int compress(vector<char>& chars) {
        int chars_length = chars.size();

        char temp = chars[0];
        int count = 1;
        int pointer = 0;

        if (chars_length == 1) {
            return 1;
        }
        
        // loop through the array
        for (int i = 1; i < chars_length; i++) {
            // Last element of the array
            if (i == chars_length - 1) {
                if (chars[i] == temp) {
                    count += 1;
                    writeToVector(chars, pointer, count, temp);
                }
                else {
                    writeToVector(chars, pointer, count, temp);
                    temp = chars[i];
                    count = 1;
                    writeToVector(chars, pointer, count, temp);
                }
            }
            else if (chars[i] == temp) {
                count += 1;
            }
            else if (chars[i] != temp) {
                writeToVector(chars, pointer, count, temp);
                temp = chars[i];
                count = 1;
            }
        }

        cout << pointer << endl;
        chars.resize(pointer);
        for (int i = 0; i < pointer; i++) {
            cout << chars[i] << ", ";
        }
        return pointer;
    }
};

int main() {
    Solution ans;
    vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'c'};
    ans.compress(chars);
    return 0;
}