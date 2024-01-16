class Solution {
public:
    bool isValid(string p) 
    {
        stack<char>s1;
        for(int i =0; i< p.length();i++)
         
        {
            
            char s= p[i];
            if(s=='{'||s=='['||s=='(')
            {
                s1.push(s);
            }
            
            else if
                
              ( !s1.empty()&& ( s=='}'&& s1.top()=='{'|| s==')'&& s1.top()=='(' ||
                               s==']'&& s1.top()=='[')
              ) 
            {
                s1.pop();
            }
            
            else
            {
                return false;
            }
                
                
        } 
        
        if(s1.empty())
            return true;
        else
            return false;
       
    }
};