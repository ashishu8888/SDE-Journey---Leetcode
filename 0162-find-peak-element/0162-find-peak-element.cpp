class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0,h=nums.size()-1;
        int ans;
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i-1] and nums[i+1] < nums[i])
            {
                   ans = i;
                break;
            }
            
        }
        if(nums.size() >1 and nums[0] > nums[1])
            ans = 0;
        if(nums.size() == 1)
            ans = 0;
        
        return ans;
    }
};