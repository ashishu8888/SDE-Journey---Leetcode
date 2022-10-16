class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(m[j][i],m[n-j-1][i]);
            }
        }
        
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>=i)
                swap(m[i][j],m[j][i]);
            }
            
        }
        
    }
};