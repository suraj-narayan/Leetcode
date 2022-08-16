class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> ump;
        for(auto i:s)
            ump[i]++;
        int n=s.size();
        for(int i=0;i<n;i++)
            if(ump[s[i]]==1)
                return i;
        return -1;
    }
};