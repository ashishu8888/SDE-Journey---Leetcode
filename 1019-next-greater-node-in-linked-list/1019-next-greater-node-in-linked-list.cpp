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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr = head;
        
        vector<int> v,v1;
        
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr = curr->next;
        }
        
        
        stack<int> s;
        
        for(int i=v.size()-1;i>=0;i--)
        {
            int x = v[i];
            if(s.empty() )
            {
                v1.push_back(0);
                s.push(x);
            }
            
           else if(!s.empty() and s.top() <= v[i])
           {
               while(!s.empty() and s.top() <= v[i])
               {
                   s.pop();
               }
               
               if(!s.empty()  and s.top() > v[i])
               {
                   
                v1.push_back(s.top());
                s.push(v[i]);
                   
               }
              else if(s.empty())
               {
                v1.push_back(0);
                s.push(x);
               }
           }
            
            else if(!s.empty() and s.top() > v[i])
            {
                v1.push_back(s.top());
                s.push(v[i]);
            }
            
        }
        
        
          //  v.clear();
        
       
        
        reverse(v1.begin(),v1.end());
      //  v[v.size()-1] = 0;
        return v1;
        
    }
};