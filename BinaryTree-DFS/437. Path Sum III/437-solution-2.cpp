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
    void findSum(TreeNode* root, int targetSum, long currentSum, int& result) {
        if (root == nullptr) {
            return;
        }
        currentSum += root->val;
        if (currentSum == targetSum) {
            result += 1;
        }
        findSum(root->left, targetSum, currentSum, result);
        findSum(root->right, targetSum, currentSum, result);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return 0;
        }
        findSum(root, targetSum, 0, result);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}