class Solution {
public:
    
    
    
    void help(vector<int>& ans, set<int>& vis, int n, int idx)
    {
        if(idx==n-1)
            return ;
        int temp=ans[ans.size()-1];
        for(int i=0;i<n;i++)
        {
            if(vis.find(temp^(1<<i))!=vis.end())
            {
                continue;
            }
            vis.insert(temp^(1<<i));
            ans.push_back(temp^(1<<i));
            help(ans, vis, n, idx+1);
            break;
        }
        return;
    }
    
    
    
    vector<int> grayCode(int n) {
        set<int> vis;
        vector<int> ans;
        ans.push_back(0);
        vis.insert(0);
        help(ans, vis, 1<<n, 0);
        return ans;
    }
};