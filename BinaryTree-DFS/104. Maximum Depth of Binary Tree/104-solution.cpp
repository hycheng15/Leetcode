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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int result = 1;
        if (root->left == nullptr && root->right == nullptr) {
            return result;
        }
        else {
            return max(result + maxDepth(root->left), result + maxDepth(root->right));
        }
    }
};

int main() {
    Solution ans;

    return 0;
}