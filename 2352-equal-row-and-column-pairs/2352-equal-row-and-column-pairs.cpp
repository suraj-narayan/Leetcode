class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
               unordered_map<u32string, int> counts;
        for(auto &vec : grid)
        {
            u32string row;
            for(auto el : vec)
            {
                row+=el;
            }
            ++counts[row];
        }
        int res = 0;
        for(int col = 0; col < grid.size(); ++col)
        {
            u32string column;
            for(auto row : grid)
            {
                column += row[col];
            }
            res+=counts[column];
        }
        return res;
        
        
        
    }
};