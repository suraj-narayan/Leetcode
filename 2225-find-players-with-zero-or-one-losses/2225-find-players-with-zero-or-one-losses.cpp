class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> ump;
        set<int> st;
        for(auto i:matches) {
            st.insert(i[0]);
            st.insert(i[1]);
            ump[i[1]]++;
        }
        vector<vector<int>> ans(2);
        for(int i:st) {
            if(ump.find(i)==ump.end())
                ans[0].push_back(i);
            if(ump[i]==1)
                ans[1].push_back(i);
        }
        return ans;
        
    }
};