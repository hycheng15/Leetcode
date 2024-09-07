#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int asteroids_length = asteroids.size();
        stack<int> asteroids_stack;

        for (int i = 0; i < asteroids_length; i++) {
            bool alive = true;
            if (asteroids_stack.empty() || asteroids_stack.top() * asteroids[i] > 0) {
                asteroids_stack.push(asteroids[i]);
            }
            else if (asteroids_stack.top() < 0 && asteroids[i] > 0) {
                asteroids_stack.push(asteroids[i]);
            }
            else {
                while (!asteroids_stack.empty() && asteroids_stack.top() > 0 && asteroids[i] < 0) {
                    if (asteroids_stack.top() < -asteroids[i]) {
                        asteroids_stack.pop();
                        continue;
                    }
                    else if (asteroids_stack.top() == -asteroids[i]) {
                        asteroids_stack.pop();
                    }
                    alive = false;
                    break;
                }
                if (alive) {
                    asteroids_stack.push(asteroids[i]);
                }
            }
        }

        vector<int> result(asteroids_stack.size());
        for (int i = asteroids_stack.size() - 1; i >= 0; --i) {
            result[i] = asteroids_stack.top();
            cout << result[i] << ", ";
            asteroids_stack.pop();
        }
        return result;
    }
};

int main() {
    Solution ans;
    vector<int> asteroids = {-2,-1,1,2};
    ans.asteroidCollision(asteroids);
    return 0;
}