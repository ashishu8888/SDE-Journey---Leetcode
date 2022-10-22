
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
    ListNode* merge(ListNode* head1, ListNode* head2) {
     ListNode* ptr = new ListNode(0);
       ListNode* c1=head1,*c2 = head2,*c3=ptr,*temp = NULL; 
       
       if(!head1 and !head2)
        {
            return NULL;
        }
        if(!head1)
        {
            return head2;
        }
        if(!head2)
        {
            return head1;
        }
        
       
        while(c1 and c2)
        {
            if(c1->val >= c2->val)
            {
                cout<<c2->val;
                c3->next = c2;
                c2=c2->next;
                
            }
            else{
                 cout<<c1->val;
                c3->next = c1;
                c1=c1->next;
            }
            c3 = c3->next;
        }
        if(!c1)
        {
            c3->next = c2;
        }
        else{
            c3->next = c1;
        }
        
        return ptr->next;
       
    }
        ListNode* sortList(ListNode* head) {
        
        if(!head || !head->next)
        {
            return head;
        }
        
        ListNode* fast=head,*slow=head,*temp=NULL;
        
        while(fast!=NULL and fast->next!=NULL)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        
        temp->next = NULL;
        
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);
        
        return merge(l1,l2);
    }
    
    
    
};