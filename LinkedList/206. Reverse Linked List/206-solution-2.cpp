#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head, ListNode* previous = NULL, ListNode* nextNode = NULL) {
        if (head != nullptr) {
            nextNode = head->next;
            head->next = previous;
            previous = head;
            head = nextNode;
            return reverseList(head, previous, nextNode);
        }
        else {
            return previous;
        }
    }
};

int main() {
    Solution ans;

    return 0;
}