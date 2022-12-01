class Solution {
public:
    vector<int> pathInZigZagTree(int l) {
        
        int t = 1;
        
        while(t*2<=l)
        {
            t *= 2;
        }
        
       int a=0;
        
        while(t)
        {
            a++;
            t = t / 2;
        }
       
        a--;
        cout<<a<<endl;
        vector<int> v;
        
        int c = 1;
        
        v.push_back(l);
        
        int y = 5;
        
        while(c)
        {
             c = 3* pow(2,a)-1-l;
          //  cout<<c<<endl;
             
            if(c!=0 and c/2!=0)
             v.push_back(c/2);
            
            l = c/2;
            a--;
            
        }
        
        reverse(v.begin(),v.end());
        
        return v;
        
        
        
    }
};