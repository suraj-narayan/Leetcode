class Solution {
public:
    bool halvesAreAlike(string s) {
        int coun1 = 0, coun2 = 0;
        int n = s.size();
        for(int i = 0; i < n; i++ ) 
            if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U') {
                if(i<n/2)
                    coun1++;
                else
                    coun2++;
            }
        return coun1 == coun2;
    }
};