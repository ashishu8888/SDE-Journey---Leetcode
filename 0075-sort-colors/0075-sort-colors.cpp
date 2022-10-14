class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        
        for(auto x : nums) 
            m[x]++;
          int i=0;  
        for(auto x : m)
        {
            int a = x.first;
            int b = x.second;
            
            while(b--)
            {
              nums[i++] = a;  
            }
            
            
        }
        
    }
};