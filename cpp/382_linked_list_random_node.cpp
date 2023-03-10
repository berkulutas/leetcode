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
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        int total = 0;
        ListNode* tmp = head;
        while (tmp) {
            tmp = tmp->next; 
            total++;
        }
        int r = rand() % total + 1;
        
        ListNode* res = head;
        while (--r>0) res = res->next;
        return res->val; 
        
    }
    ListNode* head;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */