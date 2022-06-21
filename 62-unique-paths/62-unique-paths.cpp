class Solution {
public:
    
    
    int dp[101][101];
    
    
    int solve(int m, int n)
    {
        if(m==0 and n==0)
            return 1;
        if(m<0 or n<0)
            return 0;
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        int up=solve(m-1, n);
        int side=solve(m, n-1);
        
        return dp[m][n]=up+side;
        
    }
    
    
    
    int uniquePaths(int m, int n) {
       memset(dp, -1, sizeof(dp));
        return solve(m-1, n-1);
    }
};