class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a,b;
        
        for(auto x : nums)
        {
            if(x>0)
                a.push_back(x);
            else 
                b.push_back(x);
        }
        int i=nums.size()-1;
        while(i>=0)
        {
            if(i%2)
            {
                nums[i] = b[b.size()-1];
                b.pop_back();
            }
            else{
                nums[i] = a[a.size()-1];
                a.pop_back();
            }
            i--;
        }
        return nums;
    }
};