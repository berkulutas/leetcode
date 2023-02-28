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
    void rec(TreeNode* root, string &result) {
        if (!root)
            return;
         
        result += to_string(root->val);
        if (root->left && root->right) {
            result += '(';
            rec(root->left, result);
            result += ')';
            result += '(';
            rec(root->right, result);
            result += ')';
        }
        else if (!root->left && root->right) {
            result += "()";
            result += '(';
            rec(root->right, result);
            result += ')';
        }
        else if (root->left && !root->right) {
            result += '(';
            rec(root->left, result);
            result += ')';
        }
    }

    string tree2str(TreeNode* root) {
        string result = "";
        rec(root, result);
        return result; 
    }
};