class Solution {
public:
    string removeStars(string s) {
        stack<char> str;
        int n=s.size();
        for(int i=0;i<n;i++) {
            if(str.size() and s[i]=='*') {
                str.pop();
            }
            else
                str.push(s[i]);
        }
        string ans="";
        while(str.size()) {
            ans+=str.top();
            str.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};