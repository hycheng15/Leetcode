#include <iostream>
#include <vector>

using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (val == root->val) {
            return root;
        }
        else if (val < root->val) {
            if (root->left == nullptr) {
                return nullptr;
            }
            else {
                return searchBST(root->left, val);
            }
        }
        else {
            if (root->right == nullptr) {
                return nullptr;
            }
            else {
                return searchBST(root->right, val);
            }
        }
    }
};

int main() {
    Solution ans;

    return 0;
}