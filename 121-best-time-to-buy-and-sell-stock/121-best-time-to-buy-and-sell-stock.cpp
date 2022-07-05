class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0 or n==1)
            return 0;
        int max_so_far=0;
        int min__now=prices[0];
        for(int i=1;i<n;i++)
        {
            if(prices[i]-min__now>max_so_far)
                max_so_far=prices[i]-min__now;
            if(min__now>prices[i])
            {
                min__now=prices[i];
            }
        }
        return max_so_far;
    }
};