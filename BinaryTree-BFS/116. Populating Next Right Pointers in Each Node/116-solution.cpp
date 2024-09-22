#include <iostream>
#include <vector>

using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr) {
            return root;
        }
        if (root->left != nullptr) {
           root->left->next = root->right;
           connect(root->left);
        }
        if (root->right != nullptr) {
            if (root->next != nullptr) {
                root->right->next = root->next->left;
            }
            else{
                root->right->next = nullptr;
            }
            connect(root->right);
        }
        return root;
    }
};

int main() {
    Solution ans;

    return 0;
}