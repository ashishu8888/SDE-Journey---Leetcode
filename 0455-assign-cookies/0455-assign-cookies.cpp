class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int j = 0;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
              if(j == g.size())
                return c;
            
            if(j<g.size() and g[j] <= s[i])
            {
                c++;
                 j++;
            }
        
              
        }
        
        return c;
    }
};
