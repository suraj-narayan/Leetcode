class Solution {
public:
    
    void dfs(vector<vector<char>>& grid, unordered_map<int, int>& ump, int i, int j)
    {
        if(i<0 or i>=grid.size())
            return;
        if(j<0 or j>=grid[0].size())
        {
            return;
        }
        if(grid[i][j]=='0')
            return;
        if(ump.find(i*grid[0].size()+j)!=ump.end())
            return;
        ump[i*grid[0].size()+j]++;
        dfs(grid, ump, i+1, j);
        dfs(grid, ump, i, j+1);
        dfs(grid, ump, i-1, j);
        dfs(grid, ump, i, j-1);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<pair<int, int>> arr;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                if(grid[i][j]=='1')
                    arr.push_back({i,j});
            
            
        }
        
        
        unordered_map<int, int> vis;
        
        int count=0;
        for(auto i:arr)
        {
            int a=i.first;
            int b=i.second;
            if(vis.find(a*n+b)!=vis.end())
                continue;
            count++;
            dfs(grid, vis, a, b);
        }
        
        return count;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};