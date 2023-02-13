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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* tmp; 

        int val = l1->val + l2->val;
        int carry = val / 10;
        val = val % 10;
        res->val = val;
        tmp = res;
        l1 = l1->next; 
        l2 = l2->next; 

        while (l1 && l2) {
            // cout << "l1 " << l1->val << " l2 " << l2->val << "\n";
            val = l1->val + l2->val + carry;
            carry = val / 10;
            val = val % 10; 
            // cout << "ikili " << val << " carry " << carry  << "\n"; 
            tmp->next = new ListNode(val);
            tmp = tmp->next;
            l1 = l1->next; 
            l2 = l2->next; 
        }
        while(l1) {
            // cout << "l1 " << l1->val << "\n";
            val = l1->val + carry;
            carry = val / 10;
            val = val % 10;
            // cout << "l1 " << val << " carry " << carry  << "\n"; 
            tmp->next = new ListNode(val);
            tmp = tmp->next;
            l1 = l1->next; 
        }

        while(l2) {
            // cout << "l2 " << l2->val << "\n";
            val = l2->val + carry;
            carry = val / 10;
            val = val % 10;
            // cout << "l2 " << val << " carry " << carry  << "\n"; 
            tmp->next = new ListNode(val);
            tmp = tmp->next;
            l2 = l2->next; 
        }
        if (carry) {
            tmp->next = new ListNode(carry);
        }

        return res; 
        
    }
};