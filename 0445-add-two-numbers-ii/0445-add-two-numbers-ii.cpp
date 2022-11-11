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
    ListNode* reverse(ListNode* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
 
        /* reverse the rest list and put
          the first element at the end */
        ListNode* rest = reverse(head->next);
        head->next->next = head;
 
        /* tricky step -- see the diagram */
        head->next = NULL;
 
        /* fix the head pointer */
        return rest;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
      l1 = reverse(l1);
      l2 = reverse(l2);
        
      ListNode* a = l1,*d=NULL;
      ListNode* b = l2;
        int carry = 0;
        
      while(a and b)
      {
         int sum = a->val+b->val;
         int val = (sum + carry)%10;
         carry = (sum+carry)/10;
          
         ListNode* nn = new ListNode(val);
          nn->next = d;
          d = nn;
          
          a = a->next;
          b = b->next;
          
      }
        
      while(a)
      {
          int sum = a->val;
          int val = (sum+carry)%10;
          carry = (sum+carry)/10;
          
         ListNode* nn = new ListNode(val);
         nn->next = d;
         d = nn;
          
         a = a->next;
          
      }
       
        while(b)
        {
            int sum = b->val;
            int val = (sum+carry)%10;
            carry = (sum+carry)/10;
             ListNode* nn = new ListNode(val);
         nn->next = d;
         d = nn;
          
         b = b->next;
            
        }
        
        if(carry)
        {
               ListNode* nn = new ListNode(1);
         nn->next = d;
         d = nn;
        }
        
        return d;
        
        
    
        
        
    }
};