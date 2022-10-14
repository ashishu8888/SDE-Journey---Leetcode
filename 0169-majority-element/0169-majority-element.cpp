class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int x = 0,can=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == can)
            {
                x++;
            }
            else {
                x--;
            }
            if(x == 0)
            {
                can = nums[i+1];
                x = 0;
            }
        }
        cout<<can<<endl;
        x = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == can)
                x++;
        }
        if(x>n/2)
            return can;
        
        return -1;
    }
};