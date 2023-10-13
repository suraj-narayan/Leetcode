class Solution {
public:
    int dp[1001];
    
    int memo(vector<int>& cost, int i) {
    
        if(i==0)
            return cost[i];
        if(i==1)
            return cost[i];
        if(dp[i]!=-1)
            return dp[i];
        int ans = cost[i];
        return dp[i] = ans+min(memo(cost, i-1), memo(cost, i-2));
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        int n = cost.size();
        return min(memo(cost, n-1), memo(cost, n-2));
    }
};