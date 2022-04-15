class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> ump;
        for(auto i:s)
            ump[i]++;
        int count=0, flag=0;
        
        for(auto i:ump)
        {
            if(i.second&1)
            {
                count+=i.second-1;
                flag=1;
            }
            else
                count+=i.second;
                
        }
        if(flag)
            count+=1;
        return count;
        
    }
};