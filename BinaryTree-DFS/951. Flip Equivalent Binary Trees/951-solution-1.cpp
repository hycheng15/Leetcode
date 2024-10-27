#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

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
    vector<int> dfs(TreeNode* node, map<int, vector<int>>& tree) {
        if (node == nullptr) {
            return {};
        }
        vector<int> subtreeElement;
        if (node->left) {
            subtreeElement.push_back(node->left->val);
            vector<int> left = dfs(node->left, tree);
            subtreeElement.insert(subtreeElement.end(), left.begin(), left.end());
        }
        if (node->right) {
            subtreeElement.push_back(node->right->val);
            vector<int> right = dfs(node->right, tree);
            subtreeElement.insert(subtreeElement.end(), right.begin(), right.end());
        }

        sort(subtreeElement.begin(), subtreeElement.end());
        tree[node->val] = subtreeElement;
        return subtreeElement;
    }
    bool flipEquiv(TreeNode *root1, TreeNode *root2)
    {
        map<int, vector<int>> tree1;
        map<int, vector<int>> tree2;
        dfs(root1, tree1);
        dfs(root2, tree2);

        return tree1 == tree2;
    }
};

int main() {
    Solution ans;

    return 0;
}