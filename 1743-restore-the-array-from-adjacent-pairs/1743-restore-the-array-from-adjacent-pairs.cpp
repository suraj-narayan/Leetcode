class Solution {
public:
    
    void tree(vector<int>& ans, unordered_map<int, vector<int>>& ump, int start, int parent) {
        ans.push_back(start);
        for(int i=0;i<ump[start].size();i++) {
            if(ump[start][i]==parent)
                continue;
            tree(ans, ump, ump[start][i], start);
        }
    }
    
    
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> ump;
        for(int i=0;i<adjacentPairs.size();i++) {
            ump[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            ump[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        int start;
        for(auto node:ump) {
            if(node.second.size()==1)
            {
                start = node.first;
                break;
            }
        }
        vector<int> ans;
        tree(ans, ump, start, -1);
        return ans;
        
    }
};