#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode *> bfs;
        bfs.push(root);
        long max_sum = INT_MIN;
        int max_level = INT_MAX;
        int current_level = 1;

        while (!bfs.empty()) {
            int current_level_size = bfs.size();
            int current_sum = 0;
            for (int i = 0; i < current_level_size; i++) {
                TreeNode *node = bfs.front();
                bfs.pop();
                current_sum += node->val;
                if (node->left) bfs.push(node->left);
                if (node->right) bfs.push(node->right);
            }
            if (current_sum > max_sum) {
                max_level = current_level;
                max_sum = current_sum;
            }
            current_level += 1;
        }

        return max_level;
    }
};

int main() {
    Solution ans;

    return 0;
}