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
    long long pairSum(ListNode* head) {
        map<long long,long long> m;
        vector<int> v;
        long long i=0,n=0;
      
        ListNode* curr = head;

        while(curr!=NULL )
        {
            v.push_back(curr->val);
           n++;
            curr = curr->next;
        }
        
//         curr = head;
        
//         while(curr!=NULL and i <= n/2-1)
//         {
//             m[i+1] = curr->val;
//             i++;
//             curr = curr->next;
//         }
        
        
//          while(curr!=NULL )
//         {
//             m[n-i] += curr->val;
//              i++;
//              curr = curr->next;
//         }
        
//        long long ans = 0;
        
//         for(auto x : m)
//         {
//             cout<<x.first<<" "<<x.second<<" "<<endl;
//             ans = max((long long)ans , (long long)x.second);
//         }
        
        
        
//         return ans;
        
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            ans = max(ans,v[i]+v[n-i-1]);
        }
        
        return ans;
    }
};