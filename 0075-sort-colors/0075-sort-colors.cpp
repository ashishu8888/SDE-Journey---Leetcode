class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        int l=0,h=nums.size()-1,curr=0;
        
        while(curr<=h)
        {
            if(nums[curr] == 0)
            {
               swap(nums[l],nums[curr]);
                curr++;
                l++;
            }
            else if(nums[curr] == 1)
            {
                //swap(nums[l],nums[h]);
                curr++;
                //l++;
            }
            else {
                swap(nums[curr],nums[h]);
                h--;
            }
        }
        
    }
};