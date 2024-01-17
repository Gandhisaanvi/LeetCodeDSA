class MinStack {
public:
    
    stack<int>st,minimum;
    MinStack() {
        
    }
    
    void push(int val) 
    {
        if(minimum.empty()||val<=minimum.top())
        {
            minimum.push(val);
        }
        st.push(val);
    }
    
    void pop()
    {
        if(minimum.top()==st.top())
        {
            minimum.pop();
        }
       
        st.pop();
       
    }
    
    int top() 
    {
        if(st.empty())
        return -1;
        else
        return st.top();
    }
    
    int getMin()
    {
        if(minimum.empty())
        {
            return -1;
        }
        
        return minimum.top();
        
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