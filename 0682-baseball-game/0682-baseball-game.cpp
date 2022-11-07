class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> s;
        for(auto x  : op )
        {
            if(x == "C")
            {
                s.pop();
            }
            else if(x == "D")
            {
                int x = 2*s.top();
                s.push(x);
            }
            else if(x == "+")
            {
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(y);
                s.push(x);
                s.push(x+y);
            }
            else{
                s.push(stoi(x));
            }
        }
        
        int sm = 0;
        while(!s.empty())
        {
            sm += s.top();
            s.pop();
        }
        
        return sm;
    }
};