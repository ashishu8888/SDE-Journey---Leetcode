class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            bool a = true;
            int j = 0;
            while(j<nums2.size()){
                if(nums1[i] == nums2[j]){
                    a = false;
                    break;
                }
                j++;
            }
            if(a == false){
                bool b = true;
                while(j<nums2.size()){
                    if(nums2[j] > nums1[i]){
                        v.push_back(nums2[j]);
                        b = false;
                        break;
                    }
                    j++;
                }
                if(b == true)
                    v.push_back(-1);
            }
            
            else{
                v.push_back(-1);
            }
        }
        
        return v;
    }
};