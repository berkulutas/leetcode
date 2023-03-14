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
    int total = 0; 
    void recursive(TreeNode* node, int sum) {
        if (!node->left && !node->right) {
            total += sum*10 + node->val; 
            return; 
        }
        sum = sum*10 + node->val;
        if(node->left) recursive(node->left, sum);
        if(node->right) recursive(node->right, sum);
    }
    int sumNumbers(TreeNode* root) {
        recursive(root, 0);
        return total;
    }   
};