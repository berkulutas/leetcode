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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res; 
        queue<TreeNode*> q;
        if (root) q.push(root);
        else return res;
        int counter = 0; 
        while(!q.empty()) {
            int size = q.size();
            vector<int> svec(size); 
            for (int i = 0; i<size; i++) {
                TreeNode* tmp = q.front();
                if (counter%2) svec[(size-1)-i] = (tmp->val);
                else svec[i] = (tmp->val);

                q.pop();
                if (tmp->left) q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);
            }
          
            res.push_back(svec);
            counter++;

        }
        return res; 
    }
};