class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++)
        {
            if(target<matrix[i][0] or target>matrix[i][m-1])
                continue;
            if(binary_search(matrix[i].begin(), matrix[i].end(), target))
            {
                return true;
            }
        }
        return false;
    }
};