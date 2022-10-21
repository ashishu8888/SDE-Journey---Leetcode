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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = head;
        if(curr == NULL)
            return curr;
        else if(curr->next == nullptr )
        {
            if(curr->val == val)
                return nullptr;
            else 
                return curr;
        }
        
        while(head != NULL and head->val == val)
        {
            ListNode* c = head;
            head = head->next;
            delete c;
        }
        
        curr=head;
        while( curr != NULL)
        {
            if(curr->val== val)
            {
                ListNode* dl = curr;
               prev->next = curr->next;
                // prev = curr;
            curr = curr->next;
               delete dl;
                
            }
            else
            {
                 prev = curr;
            curr = curr->next;
            }
        }
   
        
        return head;
    }
};
