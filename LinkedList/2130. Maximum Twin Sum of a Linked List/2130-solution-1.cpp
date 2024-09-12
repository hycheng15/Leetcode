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
    int pairSum(ListNode* head) {
        ListNode *ptr = head;
        
        // Get the size of the linked list
        int list_size = 0;
        while(ptr != nullptr) {
            list_size += 1;
            ptr = ptr->next;
        }

        ptr = head;
        vector<int> sum(list_size);

        for (int i = 0; i <= list_size / 2 - 1; i++) {
            sum[i] = ptr->val;
            ptr = ptr->next;
        }

        for (int i = list_size / 2; i < list_size; i++) {
            sum[list_size - i - 1] += ptr->val;
            ptr = ptr->next;
        }

        int result = *max_element(sum.begin(), sum.end());
        return result;
    }
};

int main() {
    Solution ans;
    return 0;
}