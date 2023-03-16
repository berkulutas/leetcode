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
    int postIndex;
    unordered_map<int, int> inorderIndex;

    TreeNode* arr2tree(vector<int>& postorder, int l, int r) {
        if (l > r) return nullptr;

        TreeNode* head = new TreeNode(postorder[postIndex--]);

        head->right = arr2tree(postorder, inorderIndex[head->val]+1, r);
        head->left = arr2tree(postorder, l, inorderIndex[head->val]-1);
        return head; 
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size=inorder.size();
        postIndex = size-1; 

        for (int i=0; i<size; i++)
            inorderIndex[inorder[i]] = i;
        return arr2tree(postorder, 0, size-1);
    }
};