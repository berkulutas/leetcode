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
    void inorder(TreeNode* root, int &minDiff, int &prev) {
        if (!root)  
            return;
        inorder(root->left, minDiff, prev);
        int curr = root->val;
        if (prev != -1)
            minDiff = (curr-prev) < minDiff ? (curr-prev) : minDiff;
        prev = curr;  
        inorder(root->right, minDiff, prev);

    }
    int minDiffInBST(TreeNode* root) {
        int result= INT_MAX;
        int prev = -1;
        inorder(root, result, prev);
        return result; 
    }
};