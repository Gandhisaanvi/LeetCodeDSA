
#include<string>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num)
    {
        //EVEN DIGIT ASCII VALUE IS EVEN AND ODD DIGIT ASCII VALUE IS ODD
        for(int i=num.length()-1;i>=0;i--)
        {
            
            if(num[i]%2==1)
            {
                return num.substr(0,i+1);
            }
                
                
        }
        return "";
        
    }
};