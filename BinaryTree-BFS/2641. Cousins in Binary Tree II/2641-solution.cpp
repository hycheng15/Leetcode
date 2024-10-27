#include <iostream>
#include <vector>
#include <queue>

using namespace std;


// Definition for a binary tree node
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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode *> bfs;
        bfs.push(root);
        vector<int> level_sum;
        // Run bfs once to calculate level sum
        while (!bfs.empty()) {
            int bfs_size = bfs.size();
            int sum = 0;
            for (int i = 0; i < bfs_size; i++)
            {
                TreeNode *curr = bfs.front();
                bfs.pop();
                sum += curr->val;
                if (curr->left != nullptr) {
                    bfs.push(curr->left);
                }
                if (curr->right != nullptr) {
                    bfs.push(curr->right);
                }
            }
            level_sum.push_back(sum);
        }

        // Run bfs again and modify each child's value to be level sum - self.value - sibling.value        
        bfs.push(root);
        int level = 0;
        while (!bfs.empty()) {
            int bfs_size = bfs.size();

            for (int i = 0; i < bfs_size; i++) {
                TreeNode *curr = bfs.front();
                bfs.pop();
                int left_val = curr->left == nullptr ? 0 : curr->left->val;
                int right_val = curr->right == nullptr ? 0 : curr->right->val;
                if (curr->left != nullptr) {
                    curr->left->val = level_sum[level + 1] - left_val - right_val;
                    bfs.push(curr->left);
                }
                if (curr->right != nullptr) {
                    curr->right->val = level_sum[level + 1] - left_val - right_val;
                    bfs.push(curr->right);
                }
            }
            level += 1;
        }

        root->val = 0;
        return root;
    }
};

int main() {
    Solution ans;

    return 0;
}