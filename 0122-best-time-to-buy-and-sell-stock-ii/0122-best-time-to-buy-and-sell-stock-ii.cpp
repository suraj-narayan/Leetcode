class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int ans= 0;
        vector<int> dp(n, 0);
        for(int i=0;i<n;i++) {
            int temp =0;
            for(int j=0;j<i;j++) {
                if(prices[i]>prices[j]) 
                    temp = max(temp, prices[i]-prices[j]+dp[j]);
                else
                    temp = max(temp, dp[j]);
                    
            }
            dp[i]= temp;
            ans = max(ans, dp[i]);
        }
        return ans;
        
    }
};