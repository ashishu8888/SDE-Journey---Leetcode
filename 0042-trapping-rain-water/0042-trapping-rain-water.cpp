class Solution {
public:
    int trap(vector<int>& h) {
        int p[h.size()],s[h.size()];
        
        p[0] = h[0];
        s[h.size()-1] = h[h.size()-1];
        
        for(int i=1;i<h.size();i++)
        {
           
            p[i] = max(p[i-1],h[i]);
        }
        
        for(int i=h.size()-2;i>=0;i--)
        {
          
            s[i] = max(s[i+1],h[i]);
        }
        
        int ans = 0;
        
        for(auto x : p)
            cout<<x<<" ";
        
        cout<<endl;
        
        for(auto x : s)
            cout<<x<<" ";
        
        for(int i=0;i<h.size();i++)
        {
            int x = min(p[i],s[i]) - h[i];
            
            if(x > 0)
            {
                ans += x;
            }
            
        }
        
        return ans;
    }
};