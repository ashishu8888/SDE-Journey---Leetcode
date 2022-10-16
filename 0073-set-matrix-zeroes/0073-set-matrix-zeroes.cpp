class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<pair<int,int>> p;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
                if(m[i][j] == 0)
                {
                    p.push_back(make_pair(i,j));
                }
                
            }
        }
        
        for(auto x : p)
        {
            for(int i=0;i<m[x.first].size();i++)
            {
                m[x.first][i] = 0;
            }
             for(int i=0;i<m.size();i++)
            {
                m[i][x.second] = 0;
            }
        }
        
        
    }
};
