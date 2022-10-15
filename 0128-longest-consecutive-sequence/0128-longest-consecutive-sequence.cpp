class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int x = 0;
        map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]] = INT_MAX;
        }
            
//         for(auto x : m)
//             cout<<x.first<<" ";
        
          for(int i=0;i<nums.size();i++)
        {
              
            if (m.find(nums[i]+1) != m.end())
            {
                m[nums[i]] = nums[i]+1;
            }
              
        }
        
        int ans = 1,n=0;
        
         for(auto x : m)
         {
             if(x.first+1 == x.second)
             {
                 ans++;
             }
             else 
             {
                 cout<<x.first<<" "<<x.second<<endl;
                 n = max(n,ans);
                 ans = 1;
             }
         }
        
        
        
        return n ;
    }
};