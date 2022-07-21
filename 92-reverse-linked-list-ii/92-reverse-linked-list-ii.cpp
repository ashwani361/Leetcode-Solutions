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
    ListNode* reverseBetween(ListNode* head, int l, int r){
        ListNode* curr = head;
        ListNode* prev = NULL;
        int cnt =0;
        while(curr!=NULL){
            cnt++;
            if(cnt == l){
                ListNode* incurr = curr;
                ListNode* inprev = NULL;
                while(cnt<=r){
                    ListNode* forward = incurr->next;
                    incurr->next = inprev;
                    inprev = incurr;
                    incurr = forward;
                    cnt++;
                }
                
                if(prev!=NULL){
                    prev->next = inprev;
                }
                else{
                    head = inprev;
                }
                curr->next = incurr;
                curr = incurr;
                continue;
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};