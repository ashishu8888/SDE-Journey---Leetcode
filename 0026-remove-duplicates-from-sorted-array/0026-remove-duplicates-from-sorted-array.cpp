class Solution {
public:
    int removeDuplicates(vector<int>& a) {
       int c=0;
        int s = 1;
        for(int i=1;i<a.size();i++)
        {
            if(a[i] == a[i-1])
            {
                c++;
            }
            else{
                a[i-c] = a[i];
             //   s = max(c+1,s);
               // c=0;
                s++;
            }
        }
        return s;
    }
};