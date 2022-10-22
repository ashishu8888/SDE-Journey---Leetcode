/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr = headA,*curr1=NULL;
       int a=0,b=0;
        while(curr!=NULL)
        {
            //m[curr]++;
            curr = curr->next;
            a++;
        }
        
        curr = headB;
        
        while(curr!=NULL)
        {
            
            curr=curr->next;
            b++;
        }
        
            curr =  headA;
            curr1 = headB;
        //cout<<a<<b<<endl;
        if(a>b)
        {
             int c = a-b;
           // curr = headA;
            while(c--)
            {
                curr = curr->next;
            }
        }
        
        else if(a<b)
        {
            int c = b-a;
           // curr = headA;
            while(c--)
            {
                curr1 = curr1->next;
            }
        }
        
             cout<<curr->val<<" "<<curr1->val<<endl;  
           // ListNode* curr1 = headB;
            
            while(curr!=NULL and curr1!=NULL)
            {
                //cout<<"f"<<endl;
                if(curr == curr1)
                {
                    return curr;
                }
                
                else{
                     cout<<curr->val<<" "<<curr1->val<<endl;  
                    curr = curr->next;
                    curr1=curr1->next;
                }
                
            }
        
        
        
        
        return NULL;
        
    }
};