class Solution {
public:
    bool rotateString(string s, string g) 
    {
        return s.size()==g.size()&&(s+s).find(g)!=string::npos;
    }
};