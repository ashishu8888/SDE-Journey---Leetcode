class Solution {
public:
    bool fun(string s,string t)
    {
         if(s.size() != t.size())
            return false;
        
        map<char,char> m;
        
        for(int i=0;i<s.size();i++)
        {
           
            if(m.find(s[i]) != m.end() and m[s[i]] != t[i])
            {
                return false;
            }
                
            else {
                m[s[i]] = t[i];
            }
            
            
        }
        
        
        return true;
    
    }
    bool isIsomorphic(string s, string t) {
       
        
        return fun(s,t) and fun(t,s);
        
    }
};