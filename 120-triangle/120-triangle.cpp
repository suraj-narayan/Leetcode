class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for(int i=1;i<n;i++)
        {
            triangle[i][0]+=triangle[i-1][0];
            for(int j=1;j<triangle[i].size()-1;j++)
                triangle[i][j]+=min(triangle[i-1][j], triangle[i-1][j-1]);
            triangle[i][triangle[i].size()-1]+=triangle[i-1][triangle[i].size()-2];
        }
        return *min_element(triangle[n-1].begin(), triangle[n-1].end());
        
        
    }
};