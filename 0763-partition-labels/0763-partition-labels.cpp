class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> v;
        map<char,int> m;
        string a = "";
  
        for(int i=0;i<s.size();i++)
        {
            m[s[i]] = i;
        }
        
        int x = 0;
        
        int minP=-1,lp=0,l=0;
        
        for(int i=0;i<s.size();i++)
        {
            lp = m[s[i]];
            
            minP = max(minP,lp);
            l++;
            
            if(i == minP)
            {
                v.push_back(l);
                lp=0;
                minP=-1;
                l=0;
            }
            
            
        }
        
           
        
        
        return v;
    }
};