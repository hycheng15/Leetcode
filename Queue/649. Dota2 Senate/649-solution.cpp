#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
        int senate_size = senate.length();
        int index = senate_size;

        queue<int> radiant;
        queue<int> dire;
        for (int i = 0; i < senate_size; i++) {
            if (senate[i] == 'D') {
                dire.push(i);
            }
            else {
                radiant.push(i);
            }
        }

        // Continue pop others out until one queue becomes empty
        while (!radiant.empty() && !dire.empty()) {
            // Radiant's turn, pop dire and go to the back of the queue
            // Be careful of the index, since we don't want duplicate index, 
            // We maintain a index!
            if (radiant.front() < dire.front())
            {
                dire.pop();
                radiant.push(++index);
                radiant.pop();
            }
            // Dire's turn, pop radiant and go to the back of the queue
            else {
                radiant.pop();
                dire.push(++index);
                dire.pop();
            }
        }

        if (dire.empty()) {
            return "Radiant";
        }
        else {
            return "Dire";
        }
    }
};

int main() {
    Solution ans;
    cout << ans.predictPartyVictory("RDD");
    return 0;
}