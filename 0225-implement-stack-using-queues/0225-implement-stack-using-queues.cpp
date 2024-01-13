class MyStack {
public:
    deque<int> q;
    MyStack() {
        
    }
    void push(int x) {
      q.push_back(x);
    }
    
    int pop() {
        int ans=q.back();
        q.pop_back();
        return ans;
    }
    
    int top() {
       return q.back(); 
    }
    
    bool empty() {
        if(q.empty())
        {
            return true;
        }
        return false;
    }
};