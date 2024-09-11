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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        if (head->next == nullptr) {
            return head;
        }
        ListNode *current = head;
        ListNode *previous = nullptr;
        ListNode *nextNode = nullptr;

        while(current != nullptr) {
            nextNode = current->next;
            current->next = previous;
            previous = current;
            current = nextNode;
        }

        return previous;
    }
};

int main() {
    Solution ans;

    return 0;
}