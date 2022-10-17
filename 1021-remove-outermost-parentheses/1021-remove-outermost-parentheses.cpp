class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> v;
        int a = 0;
        string b = "";
        for(auto x : s)
        {
            
            if(x == '(')
            {
                if(a++)
                {
                   b += '('; 
                }
                
            }
            else if(x == ')')
            {
                if(--a)
                b += ')';
            }
            
            
           
        }
      
        
        return b;
    }
};