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
    ListNode* partition(ListNode* head, int x) {
        ListNode* node1 = new ListNode(0);
        ListNode* node2 = new ListNode(0);
        ListNode* node1h = node1;
        ListNode* node2h = node2;
        while(head){
            if(head->val<x){
                node1->next = head;
                node1 = node1->next;
            }
            else{
                node2->next = head;
                node2 = node2->next;
            }
            head = head->next;
        }
        
        node2->next = NULL;
        node1->next = node2h->next;
        return node1h->next;
    }
};