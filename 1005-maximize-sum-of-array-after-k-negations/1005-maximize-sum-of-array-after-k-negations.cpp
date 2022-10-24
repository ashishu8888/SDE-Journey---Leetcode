class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        bool isN = false;
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<0 and k>0)
            {
                nums[i]*=-1;
                k--;
                isN = true;
            }
            
        }
        
        if(!isN || k>0)
        {
         if(( k>0 and k%2!=0))   
         {
              sort(nums.begin(),nums.end());
            nums[0] *=-1;
         }
        }
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        
        return sum;
    }
};