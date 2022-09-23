class MinStack {
public:
    
    unordered_map<int, int> ump;
    stack<int> st;
    priority_queue<int, vector<int>, greater<int>> pq;
    MinStack() {
        
    }
    
    void push(int val) {
        ump[val]++;
        st.push(val);
        pq.push(val);
    }
    
    void pop() {
        ump[st.top()]--;
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        while(ump[pq.top()]<=0)
            pq.pop();
        return pq.top();
        
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