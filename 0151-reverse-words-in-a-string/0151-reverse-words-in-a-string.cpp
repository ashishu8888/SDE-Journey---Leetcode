
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        char last ;
        string x = "",l="";
        for(auto c : s)
        {
            if(c != ' ')
            x += c;
            else 
            {
                if(last == ' ')
                    continue;
                x += ' ';
                v.push_back(x);
                x = "";
            }
            last = c;
        }
        x += ' ';
         v.push_back(x);
                x = "";
        reverse(v.begin(), v.end());
       
        for(auto y : v)
        {
            x += y;
        }
        bool isadd = false;
        for(auto y : x)
        {
            if(y == ' ' and isadd == false)
            {
                
            }
            else 
            {
                isadd = true;
            }
            if(isadd)
            {
               
                l += y;
            }
            
          
        }
            
        while(l[l.size()-1] == ' ')
        {
            l.pop_back();
        }
        
        return l;
    }
};
