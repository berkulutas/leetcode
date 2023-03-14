/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool r(TreeNode* node, int targetSum, int total) {
        if (!node) return false; 
        total += node->val;
        if (!node->left && !node->right) {
            return total == targetSum;
        }
        return r(node->left, targetSum, total) || r(node->right, targetSum, total);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return r(root, targetSum, 0);
    }
};