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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        if (head->next == nullptr) {
            return head;
        }

        int i = 1;
        ListNode *secondNodeHead = head->next;
        ListNode *firstNodeChain = head;
        ListNode *secondNodeChain = head->next;
        ListNode *ptr = head->next;

        // Be remember to check ptr!= nullptr
        while (ptr!= nullptr && ptr->next != nullptr) {
            i += 1;
            // Odd node
            if (i % 2 == 0) {
                firstNodeChain->next = ptr->next;
                ptr = ptr->next;
                firstNodeChain = ptr;
            }
            // Even nodes
            else {
                secondNodeChain->next = ptr->next;
                ptr = ptr->next;
                secondNodeChain = ptr;
            }
        }

        // Terminate both chains
        firstNodeChain->next = secondNodeHead;

        // Be remember to close the secondNodeChain!!!!
        secondNodeChain->next = nullptr;
        return head;
    }
};

int main() {
    Solution ans;
    return 0;
}