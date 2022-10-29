class MyStack {
public:
    queue<int> q;
    
    MyStack() {
       // q = [];
    }
    
    void push(int x) {
        q.push(x);
    }
    
    void reverse(queue < int > & q) {
    if (q.empty()) {

        // If the queue is empty, return.
        return;
    }

    // Store the front element in a variable.
    int element = q.front();
    q.pop();

    // Recursively call for the rest of the queue.
    reverse(q);

    // Push back the stored element.
    q.push(element);
}

    int pop() {
        vector<int> a;
        int i = 0;
       
        reverse(q);
        int x = q.front();
        q.pop();
        reverse(q);
      

       
        return x;
    }
    
    int top() {
       reverse(q);
        int x = q.front();
        reverse(q);
        return x;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */