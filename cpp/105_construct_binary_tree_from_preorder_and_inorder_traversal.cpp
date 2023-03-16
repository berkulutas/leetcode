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
    int preorderIndex=0; 
    unordered_map<int, int> inorderIndex;
    TreeNode* arr2tree(vector<int>& preorder, int l, int r) {
        if (l > r) return nullptr;

        TreeNode* head = new TreeNode(preorder[preorderIndex++]);

        head->left = arr2tree(preorder,l, inorderIndex[head->val]-1);
        head->right = arr2tree(preorder,inorderIndex[head->val]+1, r);
        return head;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = inorder.size();
        for (int i=0; i<size; i++)
            inorderIndex[inorder[i]] = i;
        return arr2tree(preorder,0, size-1);
    }
};