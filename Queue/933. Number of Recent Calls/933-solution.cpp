#include <iostream>
#include <vector>
#include <queue>

using namespace std;


class RecentCounter {
public:
    queue<int> ping_queue;
    RecentCounter() {
        ping_queue = queue<int>();
    }

    int ping(int t) {
        ping_queue.push(t);
        while(!ping_queue.empty()) {
            if (ping_queue.front() < t - 3000) {
                ping_queue.pop();
            }
            else {
                return ping_queue.size();
            }
        }
        return ping_queue.size();
    }
};

int main() {
    RecentCounter* obj = new RecentCounter();
    cout << obj->ping(1);
    cout << obj->ping(100);
    cout << obj->ping(3001);
    cout << obj->ping(3002);
    return 0;
}