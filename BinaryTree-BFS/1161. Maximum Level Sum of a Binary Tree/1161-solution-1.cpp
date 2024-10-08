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
    vector<long> sum;
    // Here we assume the root level is 0 so it is easier to save result to sum
    // When returning result, remember to add 1
    void dfs(TreeNode *node, int level) {
        if (node != nullptr) {
            if (sum.size() <= level) {
                sum.push_back(node->val);
            }
            else{
                sum[level] += node->val;
            }
            dfs(node->right, level+1);
            dfs(node->left, level+1);
        }
    }
    int maxLevelSum(TreeNode* root) {
        dfs(root, 0);
        return find(sum.begin(), sum.end(), *max_element(sum.begin(), sum.end())) - sum.begin() + 1;
    }
};

int main() {
    Solution ans;

    return 0;
}