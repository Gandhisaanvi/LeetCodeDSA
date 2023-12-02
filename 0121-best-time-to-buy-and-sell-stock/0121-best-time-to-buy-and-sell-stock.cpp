class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
     int minprice=INT_MAX;
     int n=prices .size();
     int maxprice=0;

     for(int i=0;i<n;i++)
     {
         minprice=min(minprice,prices[i]);
           maxprice=max(maxprice,prices[i]-minprice);
     }     

     return maxprice;  
    }
};