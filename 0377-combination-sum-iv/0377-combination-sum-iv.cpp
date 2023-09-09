class Solution {
public:
    int dp[1001];
    
    int util(vector<int>& nums, int n, int target) {
        if(target==0)
            return 1;
        if(target<0)
            return 0;
        if(dp[target]!=-1)
            return dp[target];
        int ans =0;
        for(int i=0;i<n;i++) {
            ans += util(nums, n, target-nums[i]);
        }
        return dp[target]=ans;
    }
    
    
    int combinationSum4(vector<int>& nums, int target) {
        int n=  nums.size();
        memset(dp, -1, sizeof(dp));
        return util(nums, n, target);
    }
};