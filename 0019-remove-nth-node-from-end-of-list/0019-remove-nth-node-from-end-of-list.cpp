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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head,*del = NULL,*f=head,*s=head;
        
        int len = 0;
        for(int i=0;i<n;i++)
        {
            s=s->next;
        }
        
        while(curr!=NULL)
        {
            curr = curr->next;
            len++;
        }
        if(n == len)
        {
            del = head;
            head = head->next;
            delete del;
            return head;
        }
        
        while(s->next!=NULL and f->next!=NULL)
        {
            f=f->next;
            s=s->next;
        }
        
        if(f->next!=NULL)
        {
               del = f->next;
        f->next = f->next->next;
        delete del;
        }
     
        
      
        return head;
    }
};