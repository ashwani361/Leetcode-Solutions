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
    int len(ListNode* head){
        int l = 0;
        ListNode* temp = head;
        while(temp){
            l++;
            temp = temp->next;
        }
        return l;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = len(head);
        if(n==l){
            head = head->next;
            return head;
        }
        int t = l-n-1;
        ListNode* temp = head;
        while(t--){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};