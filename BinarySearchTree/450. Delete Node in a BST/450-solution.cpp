#include <iostream>
#include <vector>

using namespace std;

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
    int helper(TreeNode* node) {
        if (node->left != nullptr) {
            return helper(node->left);
        }
        else {
            return node->val;
        }
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr)
        {
            return nullptr;
        }
        // Deleted node found
        if (root->val == key) {
            // If no child node (leaf), simply delete itself and return nullptr
            if (root->left == nullptr && root->right == nullptr) {
                return nullptr;
            }
            
            // If only one child
            else if (root->left == nullptr) {
                return root->right;
            }
            else if (root->right == nullptr) {
                return root->left;
            }

            // If having two child, find the smallest value that is larger than key
            // I.e., find the left most node in the right subtree
            else {
                root->val = helper(root->right);
                // Delete the node with smallest value that is larger than key
                root->right = deleteNode(root->right, root->val);
            }
        }
        else if (key < root->val) {
            // Find the node to delete in the left subtree
            // Replace the root->left by returning node
            root->left = deleteNode(root->left, key);
        }
        else {
            // Find the node to delete in the right subtree
            // Replace the root->right by returning node
            root->right = deleteNode(root->right, key);
        }

        return root;
    }
};

int main() {
    Solution ans;

    return 0;
}