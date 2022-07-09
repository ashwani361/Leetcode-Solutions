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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
        ListNode* temp = new ListNode((a->val + b->val)%10);
        int carry = (a->val + b->val)/10;
        a = a->next;
        b = b->next;
        ListNode* head = temp;
        while(a or b){
            if(a and b){
                ListNode* t = new ListNode((a->val + b->val + carry)%10);
                carry = (a->val + b->val + carry)/10;
                a = a->next;
                b = b->next;
                temp->next = t;
                temp = temp->next;
            }
            else if(a){
                ListNode* t = new ListNode((a->val + carry)%10);
                carry = (a->val + carry)/10;
                a = a->next;
                temp->next = t;
                temp = temp->next;
            }
            else{
                ListNode* t = new ListNode((b->val + carry)%10);
                carry = (b->val + carry)/10;
                b = b->next;
                temp->next = t;
                temp = temp->next;
            }
        }
        if(carry>0){
            temp->next = new ListNode(carry);
        }
        return head;
    }
};