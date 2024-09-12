#include <iostream>
#include <vector>
#include <stack>

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
    int pairSum(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        stack<int> sum;
        int result = INT_MIN;

        while (fast != nullptr)
        {
            sum.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }

        while (slow != nullptr) {
            int temp = sum.top() + slow->val;
            sum.pop();
            slow = slow->next;
            if (temp > result) {
                result = temp;
            }
        }

        return result;
    }
};

int main() {
    Solution ans;
    return 0;
}