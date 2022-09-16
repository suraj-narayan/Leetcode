class Solution {
public:
    
    int dp[1001][1001];
    
    int solve(string& s, int i, int j)
    {
        if(i==j)
            return 1;
        if(i>j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i]==s[j])
            return 2+solve(s, i+1, j-1);
        return dp[i][j]=max(solve(s, i+1, j), solve(s, i, j-1));
    }
    
    
    
    int longestPalindromeSubseq(string s) {
        memset(dp, -1, sizeof(dp));
        int n=s.size();
        return solve(s, 0, n-1);
    }
};