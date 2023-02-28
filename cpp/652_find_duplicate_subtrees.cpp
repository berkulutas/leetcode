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

    unordered_map<string, int> m;
    vector<TreeNode*> result;

    string tree2str(TreeNode* root) {
        if (!root) return "";

        string l = tree2str(root->left);
        string r = tree2str(root->right);

        string s = to_string(root->val) + "(" + l + ")" + "(" + r + ")";

        if (m[s]==1)
            result.push_back(root);
        m[s]++;

        return s; 
    }

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        tree2str(root);
        return result; 
    }
};