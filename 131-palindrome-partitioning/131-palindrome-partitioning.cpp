class Solution {
public:
    
    
    
    void dfs(vector<vector<string>>& ans, vector<string>& temp, string& s, int i, int n)
    {
        if(i>=n)
            ans.push_back(temp);
        for(int j=i;j<n;j++)
            if(ispalin(s, i, j))
            {
                temp.push_back(s.substr(i, j-i+1));
                dfs(ans, temp, s, j+1, n);
                temp.pop_back();
            }
        
    }
    
    bool ispalin(string &s, int i, int j)
    {
        while(i<j)
        {
            if(s[i++]!=s[j--])
                return false;
        }
        return true;
    }
    
    
    
    
    
    
    
    
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string> temp;
        dfs(ans, temp, s, 0, s.size());
        return ans;
        
    }
};