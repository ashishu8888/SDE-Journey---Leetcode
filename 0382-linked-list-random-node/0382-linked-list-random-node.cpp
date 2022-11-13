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
#include <cstdlib>
class Solution {
public:
    int x = 0;
    ListNode* Head = NULL;
    Solution(ListNode* head) {
        ListNode* curr = head;
        Head = head;
        
        while(curr!=NULL)
        {
            x++;
            curr=curr->next;
            
        }
    }
    
    int getRandom() {
        int n = (rand())%(x);
            
        ListNode* curr = Head;
        
        
        for(int i=0;i<n;i++)
        {
            curr = curr->next;
        }
        
        return curr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */