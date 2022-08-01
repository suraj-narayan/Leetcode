class Solution {
public:
    void solve(string s, int open, int close, int n, vector<string> &ans){
        if(open==n && close==n){
            ans.push_back(s);
            return;
        }
        
        if(open<n) solve(s+'(',open+1,close,n,ans);
        
        if(close<open) solve(s+')',open,close+1,n,ans);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        solve(s,0,0,n,ans);
        return ans;
    }
};