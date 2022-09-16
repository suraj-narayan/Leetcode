class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s)
    {
        int result;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        result = 0;
        while (g.size() && s.size())
        {
            if (s[0] < g[0])
                s.erase(s.begin());
            if (s[0] >= g[0])
            {
                result++;
                g.erase(g.begin());
                s.erase(s.begin());
            }
        }
        return (result);
    }
};