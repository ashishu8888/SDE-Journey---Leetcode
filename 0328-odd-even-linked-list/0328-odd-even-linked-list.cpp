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
    ListNode* oddEvenList(ListNode* head) {
        int x=0,m;
        if(head == NULL || head->next == NULL || head->next->next == NULL)
        {
            return head;
        }
         ListNode* tail = head,*tail1=head;
        while(tail->next!=NULL)
        {
            x++;
            tail = tail->next;
        }
        
         while(tail1->next->next!=NULL)
        {
           
            tail1 = tail1->next;
        }
        m =x;
        x=x/2;
        ListNode* curr=head,*s=head->next->next;
        
        while(curr!=NULL and curr->next!=NULL)
        {
            if(x==0)
            {
                break;
            }
            ListNode* temp =curr->next;
            curr->next = curr->next->next;
            tail->next = temp;
            tail = tail->next;
            tail->next=NULL;
            curr = curr->next;
            x--;
            
        }
        if(m%2)
        {
            
            curr  =tail1->next;
            cout<<tail1->val;
            while(curr->next!=NULL)
            {
                int temp = curr->val;
                curr->val = curr->next->val;
                curr->next->val = temp;
                curr = curr->next;
            }
        }
        cout<<x<<endl;
        return head;
    }
};
