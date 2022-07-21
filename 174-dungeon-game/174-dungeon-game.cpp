class Solution {
public:
    int solve(vector<vector<int>>& matrix,int i,int j,int n,int m,vector<vector<int>>& dp){
        if(i<0 || i>=n || j<0 || j>=m)
            return INT_MIN;
        
        if(i == n-1 and j==m-1){
            if(matrix[i][j] > 0)
                return 0;
            
            return matrix[i][j];
        }
            
        if(dp[i][j] != INT_MAX)
            return dp[i][j];
        
        int ans = matrix[i][j] + max(solve(matrix,i+1,j,n,m,dp),solve(matrix,i,j+1,n,m,dp));
        if(ans > 0)
            ans = 0;
        
        return dp[i][j] = ans;
    }
    int calculateMinimumHP(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        return 1 + abs(solve(matrix,0,0,n,m,dp));
    }
};