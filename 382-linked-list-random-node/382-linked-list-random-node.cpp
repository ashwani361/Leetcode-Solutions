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

    Solution(ListNode* head) {
        this->head = head;
        this->generator = std::default_random_engine();

    }

    int getRandom() {
        ListNode* p = head;
        int k = 1;
        int v = p->val;
        while(p->next) {
            std::uniform_int_distribution<int> distribution(0,k);
            if(distribution(generator)==0) {v = p->next->val;}
            p = p->next;
            k++;
        }
        return v;
    }
    private:

    ListNode* head;
    std::default_random_engine generator;
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */