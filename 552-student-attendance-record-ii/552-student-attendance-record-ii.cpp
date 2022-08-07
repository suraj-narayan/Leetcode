class Solution {
public:
    
    int dp[100001][3][4];
    
    int MOD=1e9+7;
    
    long long  solve(int n, int a, int l)
    {
        if(n==0)
            return 1;
        if(dp[n][a][l]!=-1)
            return dp[n][a][l];
        
        long long  ans=0;
        
        ans+=solve(n-1, a, 0);
        
        if(a<1)
            
        ans+=solve(n-1, a+1, 0);
        
        if(l<2)
            ans+=solve(n-1, a, l+1);
        
        return dp[n][a][l]=ans %MOD;
        
        
        
    }
    
    
    
    
    int checkRecord(int n) {
        
        if(n==1)
            return 3;
        
        memset(dp, -1, sizeof(dp));
        
        long long ans = solve( n, 0, 0);
        
        ans %= MOD;
        
        return (int ) ans;
        
        
    }
};