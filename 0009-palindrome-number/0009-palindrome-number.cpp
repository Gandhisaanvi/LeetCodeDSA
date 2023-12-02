class Solution {
public:
    bool isPalindrome(int x) 
    {
    long long  pal=x;//111
    long long rem=0;
    while(pal>0)
    {
        long p=pal%10;//1
        rem=rem*10+p;//1
        pal=pal/10;//11
        
    }
     if(rem==x)
    return true;
    else
    return false;

        
    }
};