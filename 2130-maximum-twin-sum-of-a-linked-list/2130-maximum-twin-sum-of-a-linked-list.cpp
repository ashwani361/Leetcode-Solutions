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
    int pairSum(ListNode* head)
    {
        vector<int> v ; // vector to store the content of linked list
        
        ListNode* curr = head ;
        int n = 0 ;
        
        while(curr)
        {
            n++ ;
            v.push_back(curr->val) ; // push each node value into v
            curr = curr->next ;
        }
        
        int ans = 0 ;
        // 0 and n-1 are twins
        // 1 and n-2 are twins
        // 2 and n-3 are twins
        // ...................
        // ...................
        // ...................
        
        // xth and yth element are twins when x < y and y = n-x-1
        
        // implementing the same using 2 pointers
        int i = 0 , j = n-1 ;
        
        while(i<j)
        {
            ans = max(ans,v[i]+v[j]) ; 
            
            // if xth and yth element are twims , then (x+1)th and (y-1)th elements are also twins when x+1 < y-1
            i++ ; j-- ;
        }
        
        return ans ;
        
    }
};
