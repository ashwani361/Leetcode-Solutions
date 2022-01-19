/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head or !head->next){
            return NULL;
        }
        bool cycle = false;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                cycle = true;
                break;
            }
        }
        if(!cycle){
            return NULL;
        }
        slow = head;
        while(fast!=slow){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};