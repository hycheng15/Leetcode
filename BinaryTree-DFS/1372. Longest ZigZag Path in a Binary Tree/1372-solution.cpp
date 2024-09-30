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
    int result = 0;
    // direction: 0: left, 1: right
    void dfs(TreeNode* node, int direction, int length) {
        if (node == nullptr) {
            result = max(result, length);
            return;
        }
        length += 1;
        if (direction == 0) {
            dfs(node->left, 1, length);
            dfs(node->right, 0, 0);
        }
        else if (direction == 1) {
            dfs(node->right, 0, length);
            dfs(node->left, 1, 0);
        }
    }

    int longestZigZag(TreeNode* root) {
        if (root->left != nullptr) {
            dfs(root->left, 1, 0);
        }
        if (root->right != nullptr) {
            dfs(root->right, 0, 0);
        }
        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}


class Solution {
public:
    int result = 0;
    // direction: 0: left, 1: right
    void dfs(TreeNode* node, int direction, int length) {
        if (node == nullptr) {
            result = max(result, length);
            return;
        }   
        length += 1;
        if (direction == 0) {
            dfs(node->left, 1, length);
            dfs(node->right, 0, 0);
        }
        else if (direction == 1) {
            dfs(node->right, 0, length);
            dfs(node->left, 1, 0);
        }
    }

    int longestZigZag(TreeNode* root) {
        if (root->left != nullptr) {
            dfs(root->left, 1, 0);
        }
        if (root->right != nullptr) {
            dfs(root->right, 0, 0);
        }
        return result;
    }
};