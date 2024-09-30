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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }
        queue<TreeNode*> bfs;
        bfs.push(root);
        while(!bfs.empty()) {
            int current_level_length = bfs.size();
            for (int i = 0; i < current_level_length; i++) {
                TreeNode *node = bfs.front();
                bfs.pop();
                if (i == 0) {
                    result.push_back(node->val);
                }
                if (node->right) {
                    bfs.push(node->right);
                }
                if (node->left) {
                    bfs.push(node->left);
                }
            }
        }
        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}