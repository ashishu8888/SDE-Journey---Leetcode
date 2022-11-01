class MinStack {
public:
    stack<int> s;
    int m = INT_MAX;
    vector<int> v;
    MinStack() {
        
    }
    
    void push(int val) {
        m = min(val,m);
        s.push(val);
        v.push_back(val);
    }
    
    void pop() {
       
        for(auto &x : v)
        {
            if(x ==s.top())
            {
                x = INT_MAX;
                break;
            }
        }
         s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        int b = *min_element(v.begin(),v.end());
        return b;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */