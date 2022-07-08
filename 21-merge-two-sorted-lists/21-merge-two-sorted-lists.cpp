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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* temp;
        ListNode* head;
        if(!a){
            return b;
        }
        if(!b){
            return a;
        }
        if(a->val<b->val){
            head = a;
            temp = a;
            a = a->next;
        }
        else{
            head = b;
            temp = b;
            b = b->next;
        }
        while(a and b){
            if(a->val<b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else{
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(a){
            temp->next = a;
        }
        if(b){
            temp->next = b;
        }
        return head;
    }
};