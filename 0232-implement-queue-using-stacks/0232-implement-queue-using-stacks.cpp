class MyQueue {
public:
void insert_at_bottom(stack<int>& st, int x)
{
 
    if (st.size() == 0) {
        st.push(x);
    }
    else {
 
        // All items are held in Function Call
        // Stack until we reach end of the stack
        // When the stack becomes empty, the
        // st.size() becomes 0, the above if
        // part is executed and the item is
        // inserted at the bottom
 
        int a = st.top();
        st.pop();
        insert_at_bottom(st, x);
 
        // push allthe items held in
        // Function Call Stack
        // once the item is inserted
        // at the bottom
        st.push(a);
    }
}
 
// Below is the function that
// reverses the given stack using
// insert_at_bottom()
void reverse(stack<int>& st)
{
    if (st.size() > 0) {
 
        // Hold all items in Function
        // Call Stack until we
        // reach end of the stack
        int x = st.top();
        st.pop();
        reverse(st);
 
        // Insert all the items held
        // in Function Call Stack
        // one by one from the bottom
        // to top. Every item is
        // inserted at the bottom
        insert_at_bottom(st, x);
    }
    return;
}
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        reverse(s);
        s.push(x);
        reverse(s);
        
    }
    
    int pop() {
        
        int x = s.top();
        s.pop();
        
        
        return x;
        
        
        
    }
    
    int peek() {
       
        int x = s.top();
      
        return x;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */