class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> s;
        int sum = 0;
        for(auto x  : op )
        {
            if(x == "C")
            {
                sum = sum - s.top();
                s.pop();
            }
            
            else if(x == "D")
            {
                int x = 2*s.top();
                sum += x;
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
                sum += (x+y);
            }
            else{
                s.push(stoi(x));
                sum += stoi(x);
            }
        }
        
      
        
        return sum;
    }
};