class Solution {
public:
    int dp[31][1001];
    int mod;
    int demo(int n, int k, int target) {
        if(n==0 and target == 0)
            return 1;
        if(target<=0)
            return 0;
        if(n<=0)
            return 0;
        if(dp[n][target]!=-1)
            return dp[n][target];
        int ans = 0;
        for(int i =1;i<=k;i++) {
            ans = ((ans%mod)+(demo(n-1, k, target-i)%mod))%mod;
        }
        return dp[n][target]=ans%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        mod = 1e9+7;
        memset(dp, -1,sizeof(dp));
        return demo(n, k, target);
    }
};