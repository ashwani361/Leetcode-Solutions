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
    int findlength(ListNode *node){
        int c = 0;
        ListNode *temp = node;
        while(temp!=NULL){
            c++;
            temp = temp->next;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = findlength(headA);
        int l2 = findlength(headB);
        if(l1 > l2){
            int d = l1 - l2;
            while(d--){
                headA = headA->next;
            }
        }
        else{
            int d = l2 - l1;
            while(d--){
                headB = headB->next;
            }
        }
        while(headA!=NULL&&headB!=NULL){
            if(headA==headB){
                break;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};