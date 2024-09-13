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
    void findGood(TreeNode* root, int& result, int max_val) {
        if (root->left != nullptr) {
            if (root->left->val >= max_val) {
                result += 1;
            }
            findGood(root->left, result, max(root->left->val, max_val));
        }
        if (root->right != nullptr) {
            if (root->right->val >= max_val) {
                result += 1;
            }
            findGood(root->right, result, max(root->right->val, max_val));
        }
    }
    int goodNodes(TreeNode* root) {
        int result = 1;
        int max_val = root->val;
        findGood(root, result, max_val);
        return result;
    }
};

int main() {
    Solution ans;

    

    return 0;
}