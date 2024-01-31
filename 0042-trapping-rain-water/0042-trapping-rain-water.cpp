class Solution {
public:
    int trap(vector<int>& arr)
    {
        int n = arr.size();
        int left[n],right[n],rainwater[n],sum=0;
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        
        for(int i =1; i<n;i++)
        {
            left[i]=max(left[i-1],arr[i]); 
        }
        for(int j =n-2;j>=0;j--)
        {
            right[j]=max(right[j+1],arr[j]);

        }
        for(int k=0;k<n-1;k++)
        {
          rainwater[k]=min(left[k],right[k])-arr[k];
            sum =sum + rainwater[k];
        }
        
        return sum;
        
    }
};