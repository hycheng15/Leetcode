#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    void checkStack(int asteroid, stack<int>& asteroids_stack) {
        if (asteroids_stack.empty()) {
            asteroids_stack.push(asteroid);
        }
        // 
        // Same direction
        else if (asteroids_stack.top() * asteroid > 0) {
            asteroids_stack.push(asteroid);
        }
        // Different direction but not colliding
        else if (asteroids_stack.top() < 0 && asteroid > 0) {
            asteroids_stack.push(asteroid);
        }
        // Different direction and colliding
        else {
            // Stack's asteroid is smaller
            if (abs(asteroids_stack.top()) < abs(asteroid)) {
                asteroids_stack.pop();
                checkStack(asteroid, asteroids_stack);
            }
            // Both asteroids are of the same size
            else if (abs(asteroids_stack.top()) == abs(asteroid)){
                asteroids_stack.pop();
            }
        }
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int asteroids_length = asteroids.size();
        stack<int> asteroids_stack;

        for (int i = 0; i < asteroids_length; i++) {
            checkStack(asteroids[i], asteroids_stack);
        }

        vector<int> result;
        while(!asteroids_stack.empty()) {
            result.push_back(asteroids_stack.top());
            cout << asteroids_stack.top();
            asteroids_stack.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution ans;
    vector<int> asteroids = {-2,-1,1,2};
    ans.asteroidCollision(asteroids);
    return 0;
}