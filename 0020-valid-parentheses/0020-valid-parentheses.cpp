class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        
        for(auto x : s)
        {
            if(x == '(' || x == '{' || x == '[')
            {
                //cout<<x;
                a.push(x);
            }
           else if(!a.empty() and x == ')' and a.top() == '(')
           {
               a.pop();
           }
             else if(!a.empty() and x == '}' and a.top() == '{')
           {
               a.pop();
           }
             else if(!a.empty() and x == ']' and a.top() == '[')
           {
               a.pop();
           }
            else{
                return false;
            }
        }
      
        if(a.empty())
        return true;
        
        return false;
    }
};
