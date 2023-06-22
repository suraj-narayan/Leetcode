class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        
        vector<vector<int>> arr(2, vector<int>(n, 0));
        arr[0][0]=-prices[0];
        
        for(int i=1;i<n;i++) {
            arr[1][i]=max(arr[1][i-1], arr[0][i-1]+prices[i]-fee);
            arr[0][i]=max(arr[0][i-1], arr[1][i-1]-prices[i]);
        }
        return arr[1][n-1];
    }
};