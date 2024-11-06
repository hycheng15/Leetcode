#include <iostream>
#include <vector>
#include <set>

using namespace std;

class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++) {
            my_set.insert(i);
        }
    }
    
    int popSmallest() {
        int result = *my_set.begin();
        my_set.erase(my_set.begin());
        return result;
    }

    void addBack(int num) {
        my_set.insert(num);
    }

    set<int> my_set;
};

int main() {
    // Solution ans;
    return 0;
}