
class Solution {
public:
    bool sol(TreeNode* node) {
        queue<TreeNode*> q;
        q.push(node);
        while(!q.empty()) {
            bool flag =0; 
            int size = q.size();
            while(size--) {
                auto tmp = q.front() ; q.pop();
                if (tmp == nullptr) flag =1;
                if (flag && tmp) return false;  
                if (tmp) {
                    q.push(tmp->left);
                    q.push(tmp->right);

                }
            }
        }
        return true; 
    }
    bool isCompleteTree(TreeNode* root) {
        return sol(root);
    }
};