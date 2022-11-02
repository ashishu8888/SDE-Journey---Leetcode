class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& n) {
        stack<int> s;
         vector<int> v;
        int m = -1;
        for(int i=n.size()-1;i>=0;i--)
        {
            if(s.empty())
            {
                bool isFound = true;
                for(int j=0;j<i;j++)
                {
                    if(n[j]>n[i])
                    {
                        v.push_back(n[j]);
                        isFound = false;
                        break;
                    }
                }
                if(isFound)
                {
                    v.push_back(-1);
                }
                s.push(n[i]);
            }
            else{
                
                while(!s.empty() and s.top()<=n[i])
                {
                    s.pop();
                }
                
                if(!s.empty())
                {
                    v.push_back(s.top());
                }
                else
                {
                    bool isFound = true;
                for(int j=0;j<i;j++)
                {
                    if(n[j]>n[i])
                    {
                        v.push_back(n[j]);
                        isFound = false;
                        break;
                    }
                }
                if(isFound)
                {
                    v.push_back(-1);
                }
                    
                }
                s.push(n[i]);
            }
        }
        reverse(v.begin(),v.end());
      //  v[v.size()-1] = m;
        return v;
    }
};