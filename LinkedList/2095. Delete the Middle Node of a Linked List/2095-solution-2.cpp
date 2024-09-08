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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *previous;
        
        if (head->next == nullptr) {
            return nullptr;
        }

        while(fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            previous = slow;
            slow = slow->next;
        }

        previous->next = slow->next;

        return head;
    }
};

int main() {
    Solution ans;
    ListNode* second = new ListNode(3);
    ListNode* first = new ListNode(2, second);
    ListNode* head = new ListNode(1, first);
    ans.deleteMiddle(head);
    return 0;
}