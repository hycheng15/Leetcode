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
        int list_size = 1;
        ListNode *count = head;
        while (count->next != nullptr) {
            list_size += 1;
            count = count->next;
        }
        int n;
        if (list_size % 2 == 0) {
            n = list_size / 2;
        }
        else {
            n = (list_size - 1) / 2;
        }

        if (n == 0) {
            return nullptr;
        }

        ListNode *deletePivot;
        ListNode *previous_node;
        ListNode *next_node;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                deletePivot = head;
            }
            else {
                deletePivot = deletePivot->next;
            }
            if (i == n - 1){
                previous_node = deletePivot;
            }
            if (i == n) {
                next_node = deletePivot->next;
            }
        }

        previous_node->next = next_node;

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