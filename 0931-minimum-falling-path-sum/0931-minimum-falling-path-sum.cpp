class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        vector<vector<int>> arr(n, vector<int>(n, 0));
        
        for(int i=0 ;i<n;i++) {
            arr[0][i] = matrix[0][i];
        }
        int ans2=INT_MAX;
        for(int i = 1; i<n;i++) {
            for(int j = 0;j<n;j++) {
                int ans = arr[i-1][j];
                if(j>0)
                    ans= min(ans, arr[i-1][j-1]);
                if(j<n-1)
                    ans= min(ans, arr[i-1][j+1]);
                arr[i][j] = matrix[i][j]+ans;
            }
            if(i==n-1)
            {
                for(int j=0;j<n;j++) {
                    ans2 = min(ans2, arr[i][j]);
                }
            }
        }
        if(n==1)
        {
            for(int j=0;j<n;j++) {
                    ans2 = min(ans2, arr[0][j]);
                }
        }
        return ans2;
        
    }
};