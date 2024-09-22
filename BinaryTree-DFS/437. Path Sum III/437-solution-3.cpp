#include <iostream>
#include <vector>
#include <unordered_map>

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
    // key: prefix_sum, value: count
    unordered_map<long, int> prefix;
    void findSum(TreeNode* root, int targetSum, long currentSum) {
        if (root == nullptr) {
            return;
        }
        currentSum += root->val;

        // Check how many paths before this node have prefix_sum = currentSum - targetSum
        // If so, prefix_sum + currentSum = targetSum, 
        // then there is prefix[currentSum - targetSum] paths that adds up to targetSum
        if (prefix.find(currentSum - targetSum) != prefix.end()) {
            result += prefix[currentSum - targetSum];
        }

        // Add currentSum to prefix
        prefix[currentSum]++;

        findSum(root->left, targetSum, currentSum);
        findSum(root->right, targetSum, currentSum);

        // Backtrack so that prefix won't affect other paths
        prefix[currentSum]--;

        return;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return 0;
        }
        prefix[0] = 1;
        findSum(root, targetSum, 0);
        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}