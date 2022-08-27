class Solution {
public:
    
    
    
   void tom(vector<vector<int>>& edges,unordered_map<int,int>& mp,int& ans,int i,int parent){
        
        if(mp.find(i)!=mp.end()){
            return;
        }
        ans++;
      
        for(int j=0;j<edges[i].size();j++){
            if(edges[i][j]!=parent){
                
                tom(edges,mp,ans,edges[i][j],i);
            }
        }
        return;
        
    }
    
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        
        unordered_map<int,int> mp;
        int i,k;
        for(i=0;i<restricted.size();i++){
            mp[restricted[i]]++;
        }
        if(mp.find(0)!=mp.end()){
            return 0;
        }
        vector<vector<int>> v(n);
        for(i=0;i<edges.size();i++){
            v[edges[i][0]].push_back(edges[i][1]);
            v[edges[i][1]].push_back(edges[i][0]);
        }
        int ans=0;
        tom(v,mp,ans,0,-1);
        return ans;
        
          
        
    }
};