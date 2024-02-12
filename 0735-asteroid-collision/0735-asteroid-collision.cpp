class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids)
    {
       stack<int> st;
    vector<int> ans;
    for(auto x: asteroids) {
        int flag=1;
        while(st.size() && st.top()>0 && x<=0) {
            if(st.top() == abs(x)) {
                st.pop(); flag=0; break;
            }
            if(st.top() > abs(x)) {
                flag=0;
                break;
            }
            if(st.top() < abs(x)){
                st.pop();
            }
        }
        if(flag) st.push(x);
    }
    while(st.size()) {
        ans.push_back(st.top()); st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
};