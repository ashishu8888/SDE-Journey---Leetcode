class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
         vector<int> v;
        int l=0,h=nums.size()-1,ans=-1,ans1=-1;
        
       while(l<=h)
       {
           int mid = (l+h)/2;
           if(nums[mid] == t)
           {
               ans = mid;
               h = mid-1;
           }
           else if(nums[mid] < t)
           {
               l=mid+1;
               
           }
           else if(nums[mid] > t)
           {
               h = mid-1;
               
           }
           
       }
        
        l=0,h=nums.size()-1;
        
      while(l<=h)
       {
           int mid = (l+h)/2;
          
           if(nums[mid] == t)
           {
               ans1 = mid;
               l = mid+1;
           }
           else if(nums[mid] < t)
           {
               l=mid+1;
               
           }
           else if(nums[mid] > t)
           {
               h = mid-1;
               
           }
           
       }
        
        
        v.push_back(ans);
        v.push_back(ans1); 
        return v;
        
    }
};
