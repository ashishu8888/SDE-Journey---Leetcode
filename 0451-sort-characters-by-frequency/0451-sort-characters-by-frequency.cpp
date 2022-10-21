class Solution {
public:
    static bool cmp(pair<char,int>a  ,  pair<char,int> b)
    {
        return a.second > b.second;
    }
    string frequencySort(string s) {
        map<char,int> m;
        
        for(auto x : s)
        {
            m[x]++;
        }
        
        vector<pair<char,int>> v;
        for(auto x : m)
        {
            v.push_back(make_pair(x.first,x.second));
        }
        
        sort(v.begin(),v.end(),cmp);
        string a = "";
        for(int i=0;i<v.size();i++)
        {
           int x = v[i].second;
            while(x--)
            {
                a += v[i].first;
            }
        }
     
        return a;
    }
};