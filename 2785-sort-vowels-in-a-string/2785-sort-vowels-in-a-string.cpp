class Solution {
public:
    
    bool isvowel(char c) {
        if (c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='A' or c=='E' or c=='I' or c=='O' or c=='U')
            return true;
        return false;
    }
    
    string sortVowels(string s) {
        vector<char> str;
        for(char c: s)
            if(isvowel(c))
                str.push_back(c);
        sort(str.begin(), str.end());
        int n= s.size();
        int j = 0;
        for(int i=0;i<n;i++) {
            if(isvowel(s[i])) {
                s[i] = str[j];
                j++;
            }
        }
        return s;
    }
};