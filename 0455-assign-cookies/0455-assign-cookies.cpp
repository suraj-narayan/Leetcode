class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0;
        int n = g.size();
        int sn = s.size();
        int j =0;
        for(int i =0 ;i < n;i++) {
            while(j<sn and s[j]<g[i])
                j++;
            if(j==sn)
                break;
            j++;
            ans++;
        }
        return ans;
    }
};