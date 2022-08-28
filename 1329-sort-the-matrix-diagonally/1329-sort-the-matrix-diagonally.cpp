class Solution {
public:
    
    
    
    void util(vector<vector<int>>& mat, int i, int j, int m, int n)
    {
         int k=i, l=j;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(;k<m and l<n; k++, l++)
        {
            pq.push(mat[k][l]);
        }
        
        k=i;
        l=j;
        
        for(;k<m and l<n; k++, l++)
        {
            mat[k][l]=pq.top();
            pq.pop();
        }
        return;
        
    }
    
    
    
    
    
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        
        
        for(int i=0;i<m;i++)
            util(mat, i, 0, m, n);
        for(int i=1;i<n;i++)
            util(mat, 0, i, m, n);
        return mat;
    }
};