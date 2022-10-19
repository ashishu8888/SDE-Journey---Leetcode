class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans = 0;
        string s = strs[0],a = "",m="";
        
        for(int i=0;i<s.size();i++)
        {
                a += s[i];
            int match = 1;
             for(int j=1;j<strs.size();j++)
            {
                 int k = 0;
                 string b = "";
                
                 while(k!=strs[j].size())
                 {
                     b += strs[j][k++];
                     if(b == a)
                     {
                         match++;
                        
                     }
                  
                 }
                    
            }
            if(match == strs.size())
            {
                m = a;
            }
        }
        return m;
        
    }
};