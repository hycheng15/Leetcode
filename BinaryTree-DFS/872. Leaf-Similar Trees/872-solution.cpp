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
    void getLeaf(TreeNode* root, vector<int> &leaf) {
        if (root->left != nullptr) {
            getLeaf(root->left, leaf);
        }
        if (root->left == nullptr && root->right == nullptr) {
            leaf.push_back(root->val);
        }
        if (root->right != nullptr) {
            getLeaf(root->right, leaf);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> root1_leaf;
        vector<int> root2_leaf;

        getLeaf(root1, root1_leaf);
        getLeaf(root2, root2_leaf);

        if (root1_leaf == root2_leaf) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    Solution ans;

    return 0;
}