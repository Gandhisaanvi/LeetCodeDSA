#include<stack>
class Solution 
{
public:
    
    vector<int>nextsmaller(vector<int>&arr,int n)
    {
        stack<int>st;
        vector<int>ans(n);
        st.push(-1);
        for(int i =n-1;i>=0;i--)
        {
            int current =arr[i];
            while(st.top()!=-1&& arr[st.top()]>=current )
            {
                st.pop();

            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;

    }
    
    vector<int>prevsmaller(vector<int>&arr,int n)
    {
        stack<int>st;
        vector<int>ans(n);
        st.push(-1);
        for(int i =0;i<n;i++)
        {
            int current =arr[i];
            while(st.top()!=-1&& arr[st.top()]>=current )
            {
                st.pop();

            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;

    }
    
   int largestRectangleArea(vector<int>& a) 
    {
       int n =a.size();
       vector<int>next(n);
       next = nextsmaller(a,n);
       vector<int>prev(n);
       prev=prevsmaller(a,n);
       int area = -1;
       
       for(int i =0 ; i<n ;i++)
       {
            int l =a[i];
             if(next[i]==-1)
             {
                 next[i]=n;
             }
           int b = next[i]-prev[i]-1;
           int newarea= l*b;
           area= max(newarea,area);
           
        }
       
       return area;
       
       
        
    }
};