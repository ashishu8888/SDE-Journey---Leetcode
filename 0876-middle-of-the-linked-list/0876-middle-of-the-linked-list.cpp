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
    ListNode* middleNode(ListNode* head) {
        ListNode* f=head,*s=head->next;
        
        
        
        while(s!=NULL and s->next != NULL)
        {
            f = f->next;
            s = s->next->next;
        }
        if(s!=NULL)
            f=f->next;
        return f;
    }
};