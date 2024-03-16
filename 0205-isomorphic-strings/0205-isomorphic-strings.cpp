#include <string>
#include <unordered_map>
class Solution {
public:
bool isIsomorphic(const std::string &str1, const std::string &str2) 
{
    int n = str1.length();
    int m = str2.length();

    if (n != m)
        return false;

    std::unordered_map<char, char> m1, m2;

    for (int i = 0; i < n; i++) {
        char c1 = str1[i];
        char c2 = str2[i];

        if (m1.find(c1) == m1.end() && m2.find(c2) == m2.end()) {
            m1[c1] = c2;
            m2[c2] = c1;
        } else if (m1[c1] != c2) {
            return false;
        }
    }

    return true;
}

};


