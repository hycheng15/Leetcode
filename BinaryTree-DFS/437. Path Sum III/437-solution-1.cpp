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
    void dfs(TreeNode* root, int targetSum, long currentSum, int& result) {
        currentSum += root->val;
        if (currentSum == targetSum) {
            result += 1;
        }
        if (root->left != nullptr) {
            dfs(root->left, targetSum, currentSum, result);
        }
        if (root->right != nullptr) {
            dfs(root->right, targetSum, currentSum, result);
        }
    }
    void findSum(TreeNode* root, int targetSum, long currentSum, int& result) {
        currentSum += root->val;
        if (currentSum == targetSum) {
            result += 1;
        }
        if (root->left != nullptr) {
            dfs(root->left, targetSum, currentSum, result);
            findSum(root->left, targetSum, 0, result);
        }
        if (root->right != nullptr) {
            dfs(root->right, targetSum, currentSum, result);
            findSum(root->right, targetSum, 0, result);
        }
    }
    int pathSum(TreeNode* root, int targetSum) {
        int value;
        int result = 0;
        if (root == nullptr) {
            return 0;
        }
        findSum(root, targetSum, 0, result);
        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}