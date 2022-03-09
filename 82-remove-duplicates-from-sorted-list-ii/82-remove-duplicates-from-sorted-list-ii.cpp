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
        ListNode* deleteDuplicates(ListNode* head) {
            if( !head ) return NULL;
            ListNode* p = new ListNode(head->val-1), *ptr = p, *pre = p;
            while( head ) {
                if( pre->val != head->val && (!head->next || head->next->val != head->val )) {
                    ptr->next = head;
                    ptr = ptr->next;
                }
                pre = head;
                head = head->next;
            }
            ptr->next = NULL;
            return p->next;
        }
};