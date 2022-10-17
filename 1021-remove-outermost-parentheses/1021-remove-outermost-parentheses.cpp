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
                a++;
                b += '(';
            }
            else if(x == ')')
            {
                a--;
                b += ')';
            }
            
            if(a == 0)
            {
              b =b.substr(1, b.size() - 2);
                v.push_back(b);
                b = "";
            }
        }
        
        string ans = "";
        
        for(auto x : v)
        {
            ans += x;
        }
        
        return ans;
    }
};