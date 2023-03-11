/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* recur(ListNode* head, int size) {
        if (size == 0) return NULL; 
        if (size == 1) return new TreeNode(head->val);
        int mid = size/2;
        ListNode* tmp = head;
        while(mid--) tmp = tmp->next; 
        TreeNode* node = new TreeNode(tmp->val);
        int a,b;
        a = (size-1)/2;
        b = (size-1)/2;
        if ((size-1)%2) {
            a++;
        }
        node->left = recur(head,a); 
        node->right = recur(tmp->next, b);

        return node;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* tmp = head;
        int size = 0; 
        while (tmp) {
            size++; 
            tmp = tmp->next; 
        }
        return recur(head, size);
    }
};