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
    int numComponents(ListNode* head, vector<int>& nums) {
        map<int,int> m;
        
        for(auto x : nums)
        {
            m[x]++;
        }
        
        ListNode* curr = head,*prev=head;
        int ans = 0,streak=0;
        while(curr!=NULL)
        {
            
            if(m[curr->val])
            {
                streak++;
                
            }
            
            else if(streak)
            {
                streak = 0;
                ans++;
            }
            
            
           curr = curr->next;
        }
      
        if(streak)
        {
            ans++;
        }
        
        return ans;
        
    }
};