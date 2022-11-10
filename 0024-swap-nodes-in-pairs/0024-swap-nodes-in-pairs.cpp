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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=head;
        int i = 1;
        
        while(curr!=NULL)
        {
            
            prev = curr;
            curr = curr->next;
            if(i%2 and curr!=NULL and prev!=NULL)
            {
                swap(curr->val,prev->val);
            }
            i++;
            
        }
        
        return head;
    }
};