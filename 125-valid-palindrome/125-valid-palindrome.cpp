class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        while(i<s.size())
        {
            if(iswalnum(s[i]))
            {
                if(isupper(s[i]))
                    s[i]=tolower(s[i]);
                i++;
                continue;
            }
              else
              {
                  s.erase(i, 1);
                  continue;
              }
        }
        string temp=s;
        reverse(temp.begin(), temp.end());
        if(temp==s)
            return true;
        else
            return false;
    }
};