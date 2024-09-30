#include <iostream>
#include <vector>
#include <queue>

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
    void dfs(TreeNode* root, int level, vector<int> &result) {
        if (root == nullptr) {
            return;
        }
        // Compare the size of the result and the level to check whether this level's right is already added
        if (result.size() == level) {
            result.push_back(root->val);
        }
        dfs(root->right, level+1, result);
        dfs(root->left, level+1, result);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }
        result.push_back(root->val);
        dfs(root->right, 1, result);
        dfs(root->left, 1, result);

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}