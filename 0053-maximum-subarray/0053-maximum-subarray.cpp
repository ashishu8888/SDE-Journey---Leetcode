class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = -1,x=0;
        for(int i=0;i<nums.size();i++)
        {
           if(x + nums[i]>0)
           {
                 x += nums[i];
             s = max(x,s);
           }
            else 
            {
               
                x = 0;
            }
            
            
        }
        
        if(s == -1)
        {
            cout<<5<<endl;
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        
        return s;
    }
};