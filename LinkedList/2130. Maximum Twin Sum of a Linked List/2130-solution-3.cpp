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

// Split the list into two halves and return the second half's head
ListNode* SplitList(ListNode* head) {
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = nullptr;

    while (fast != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = nullptr;
    return slow;
}

// Reverse the list
ListNode* ReverseList(ListNode* head) {
    ListNode *prevNode = nullptr;
    ListNode *currNode = head;

    while (currNode != nullptr) {
        ListNode *nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }

    return prevNode;
}

class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* secondHead = SplitList(head);
        secondHead = ReverseList(secondHead);
        ListNode* firstHead = head;

        int result = INT_MIN;

        while (firstHead != nullptr && secondHead != nullptr) {
            int value = firstHead->val + secondHead->val;
            if (value > result) {
                result = value;
            }
            firstHead = firstHead->next;
            secondHead = secondHead->next;
        }

        return result;
    }
};

int main() {
    Solution ans;
    return 0;
}