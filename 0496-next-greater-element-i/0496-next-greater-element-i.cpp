class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
             stack<int> s;
            for(int j=nums2.size()-1;j>=0;j--)
            {
                if(s.empty())
                {
                    if(nums2[j] == nums1[i])
                         {
                                v.push_back(-1);
                         }
                    s.push(nums2[j]);
                }
                else if(s.top() <= nums2[j])
                {
                    while(!s.empty() and s.top() <= nums2[j])
                    {
                        s.pop();
                    }
                    if(nums2[j] == nums1[i])
                {
                    if(s.empty())
                    {
                        v.push_back(-1);
                    }
                        else{
                           v.push_back(s.top()); 
                        }
                }
                    s.push(nums2[j]);
                    
                }
                else if(s.top() > nums2[j])
                {
                         if(nums2[j] == nums1[i])
                         {
                                v.push_back(s.top());
                         }
                    s.push(nums2[j]);
                }
                
            }
        }
        return v;
    }
};