class Solution {
public:
    int largestInteger(int num) {
        vector<int> o,e;
        
        string s = to_string(num);
        
        for(auto x : s)
        {
            int a = x - '0';
            if(a%2==0)
            {
                e.push_back(a);
            }
            else
            {
                o.push_back(a);
            }
        }
        
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        
       string q = "";
        
        for(int i=0;i<s.size();i++)
        {
            int a = s[i] - '0';
         
            if(a%2 == 0)
            {
                if(e.size()>0)
                {

                     string b = to_string(e[e.size()-1]);
                    e.pop_back();
                    q+=b;
                        
                
                }
            }
            else{
               if(o.size()>0)
               {
                
                   string b = to_string(o[o.size()-1]);
                    o.pop_back();
                    q+=b;
                
               }
            }
        }
        int u = stoi(q);
        
        return u;
        
    }
};