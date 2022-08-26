class Solution {
public:
    
    bool solve(string& s, string& t, int i, int j)
    {
        if(i<0)
            return true;
        if(j<i)
            return false;
        
        if(s[i]==t[j])
            return solve(s, t, i-1, j-1);
        return solve(s, t, i, j-1);
    }
    
    
    
    
    bool isSubsequence(string s, string t) {
        int ss=s.size(), ts=t.size();
        
        return solve(s, t, ss-1, ts-1);
    }
};