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
    string m = "{}"; // since char '{' is after char 'z' in ASCII table
    void createAllStrings(TreeNode* node, string s) {
        if (!node) return;
        // leaf node
        if (!node->left && !node->right) {
            m = min(m, (char)(node->val+97) + s);
        }
        s = (char)(node->val+97) + s;
        createAllStrings(node->left, s);
        createAllStrings(node->right, s);

    }
    string smallestFromLeaf(TreeNode* root) {
        createAllStrings(root, "");
        return m; 
    }
};