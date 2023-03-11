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
    TreeNode* recur(vector<int> &nums, int l, int r) {
        if ((l > r)) return NULL;
        if (l == r) return new TreeNode(nums[l]);

        int mid = (l+r)/2;
        TreeNode* tmp = new TreeNode(nums[mid]);
        tmp->left = recur(nums, l, mid-1);
        tmp->right = recur(nums, mid+1, r);
        return tmp; 

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return recur(nums, 0, nums.size()-1);
    }
};