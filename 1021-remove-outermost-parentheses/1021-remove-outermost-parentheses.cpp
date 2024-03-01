class Solution {
public:
    string removeOuterParentheses(string s) 
    {
       string ans="";
       int count=0;
       char ch;
       for(char ch : s)
       {
           if(ch=='(')
           {
               if(count>0)
               {
               ans=ans+ch;
               }
               count++;

           }
           else
           {
               if(count>1)
               {
                 ans=ans+ch;
               }
               count--;

           }
   
       }
        return ans;
        
    }
};





