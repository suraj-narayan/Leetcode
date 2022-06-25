class Solution {
public:
    set<string> ans;
    
    
    void helper(string str, int n)
    {
        if(str.size()==n)
        {
            ans.insert(str);
            return;
        }
        
        if(isdigit(str[n]))
            helper(str, n+1);
        helper(str, n+1);
        if(isupper(str[n]))
        {
            str[n]=tolower(str[n]);
            helper(str, n+1);
            str[n]=toupper(str[n]);
        }
        if(islower(str[n]))
        {
            str[n]=toupper(str[n]);
            helper(str, n+1);
            str[n]=tolower(str[n]);
        }
        
        
        return;
        
        
    }
    
    
    vector<string> letterCasePermutation(string s) {
        helper(s, 0);
        vector<string> ans2(ans.begin(), ans.end());
        return ans2;
    }
};