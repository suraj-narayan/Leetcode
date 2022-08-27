class Solution {
public:
    
    
    
    
    int dfs(int u, int p, vector<vector<int>>& adj, vector<int>& restricted) {
        if(binary_search(restricted.begin(), restricted.end(), u))
            return 0;
        int ans=1;
        
        for(int i=0;i<adj[u].size();i++)
        {
            if(adj[u][i]==p)
                continue;
            ans+=dfs(adj[u][i], u, adj, restricted);
        }
        return ans;
    }
    
    
    
    
    
    
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
       
        vector<vector<int>> adj(n);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        
        sort(restricted.begin(), restricted.end());
        
        return dfs(0, -1, adj, restricted);
        
        
        
        
        
        
        
    }
};