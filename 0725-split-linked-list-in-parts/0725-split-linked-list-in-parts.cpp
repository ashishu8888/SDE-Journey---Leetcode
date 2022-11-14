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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v;
            
        ListNode* curr = head;
        int n= 0;
        while(curr!=NULL)
        {
            n++;
            curr = curr->next;
        }
        
        curr = head;
        
        if(k>=n)
        {
            while(curr!=NULL)
            {
                ListNode* cc = curr;
                curr=curr->next;
                
                cc->next = NULL;
                
                v.push_back(cc);
                
            }
            
            int x = k-n;
            
            while(x--)
            {
                v.push_back(NULL);
            }
            
        }
        else{
            
            int x = n/k;
            int y = n%k;
            if(y)
            {
                x++;
            }
            
            int i=1,l=0;
            ListNode* ct = head;
            
            while(curr!=NULL)
            {
                if(i == x )
                {
                    ListNode* cc = curr;
                    curr = curr->next;
                    cc->next = NULL;
                    
                    v.push_back(ct);
                    ct = curr;
                    i = 1;
                   // curr = curr->next;
                    l++;
                    
                    y--;
                    if(y==0)
                    {
                        x--;
                    }
                    
                }
                else{
                    i++;
                    curr=curr->next;
                }
            }
            
            
        }
        
        
        return v;
    }
};