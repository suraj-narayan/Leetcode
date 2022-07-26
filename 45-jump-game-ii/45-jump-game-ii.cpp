class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, 0);
        for(int i=1;i<n;i++)
        {
            int ma=INT_MAX;
            for(int j=0;j<i;j++)
            {
                if(j+nums[j]>=i and dp[j]+1<ma)
                    ma=dp[j]+1;
            }
            dp[i]=ma;
        }
        return dp[n-1];
    }
};