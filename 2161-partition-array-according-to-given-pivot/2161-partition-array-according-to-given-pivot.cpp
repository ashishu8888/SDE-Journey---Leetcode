class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int> q;
        
        for(auto x : nums)
        {
            if(x < pivot)
            {
                q.push_back(x);
            }
        }
        
          for(auto x : nums)
        {
            if(x == pivot)
            {
                q.push_back(x);
            }
        }
        
        for(auto x : nums)
        {
            if(x > pivot)
            {
                q.push_back(x);
            }
        }
        
        return q;
        
        
    }
};