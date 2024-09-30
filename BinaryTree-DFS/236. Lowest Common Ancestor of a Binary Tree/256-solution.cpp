#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *left;
        TreeNode *right;
        if (root->val == p->val || root->val == q->val) {
            return root;
        }
        if (root->left)
        {
            if (root->left->val == p->val || root->left->val == q->val) {
                left = root->left;
            }
            else {
                left = lowestCommonAncestor(root->left, p, q);
            }
        }

        if (root->right) {
            if (root->right->val == p->val || root->right->val == q->val) {
                right = root->right;
            }
            else {
                right = lowestCommonAncestor(root->right, p, q);
            }
        }

        if (left && right) {
            return root;
        }
        return left ? left : right;
    }
};

int main() {
    Solution ans;

    return 0;
}