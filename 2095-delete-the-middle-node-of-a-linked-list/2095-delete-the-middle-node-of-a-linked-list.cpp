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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* curr = head,*f=head,*s=head,*del,*prev = head;
        if(head->next == NULL)
            return NULL;
        while( f!=NULL and s!=NULL and s->next!=NULL)
        {
            prev = f;
            f = f->next;
            s=s->next->next;
            
        }
        del = f;
        prev->next = f->next;
        delete del;
        
        return head;
    }
};