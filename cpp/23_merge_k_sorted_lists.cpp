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
    ListNode* merge2Lists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;

        if (l1->val <= l2->val) {
            l1->next = merge2Lists(l1->next, l2);
            return l1;
        }
        else {
            l2->next = merge2Lists(l1, l2->next);
            return l2;
        }
         
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int size = lists.size();
        if (size == 0) return nullptr;
        while (size>1) {
            for (int i=0; i<size/2; i++) {
                lists[i] = merge2Lists(lists[i], lists[(size-1)-i]);
            }
            size = (size+1)/2;
        }

        return lists[0];
    }
};