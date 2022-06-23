class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         int n=numCourses;
        
        vector<vector<int>> graph(n);
        vector<int> in(n, 0);
        for(auto i:prerequisites)
        {
            graph[i[1]].push_back(i[0]);
            in[i[0]]++;
        }
        
        
        queue<int> q;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
            {
                q.push(i);
                ans.push_back(i);
            }
        }
        
        while(q.size())
        {
            int temp=q.front();
            q.pop();
            
            
            for(auto i:graph[temp])
            {
                if(--in[i]==0)
                {
                    q.push(i);
                    ans.push_back(i);
                }
            }
            
            
            
            
        }
        if(ans.size()==n)
            return ans;
        return vector<int>(0);
        
    }
};