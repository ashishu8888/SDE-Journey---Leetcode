class Solution {
public:
    int search(vector<int>& arr, int x) {
        int i = 0,j = arr.size()-1;
        
        
        while(i<=j)
        {
            int mid  = (i+j)/2;
            if(arr[mid] == x)
            {
                return mid;
            }
            if(arr[i] <= arr[mid])
            {
                if(x >= arr[i] and arr[mid] > x)
                {
                    j = mid-1;
                }
                else {
                    i = mid+1;
                }
            }
            else {
                if(x > arr[mid] and arr[j] >= x)
                {
                    i = mid+1;
                }
                else {
                    j = mid-1;
                }
            }
        }
        return -1;
        
    }
};
