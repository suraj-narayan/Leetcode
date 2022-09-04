class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> heights;
        vector<vector<int>> ans;

        for(int i = 0; i < buildings.size(); i++)
        {
            heights.push_back({buildings[i][0], -buildings[i][2]}); // start point denoted by -H
            heights.push_back({buildings[i][1], buildings[i][2]}); // end by +H
        }
       
        sort(heights.begin(), heights.end());
     
        multiset<int> currHeights = {0}; //can use map (priority queue does not support remove in log(N))
       
        int prevMax = 0;
        for(auto h : heights)
        {
            if(h[1] < 0) // start
                currHeights.insert(-h[1]);
            else
                currHeights.erase(currHeights.find(h[1]));
            
            int currentMax = *currHeights.rbegin();
            if(prevMax != currentMax)
            {
                ans.push_back({h[0], currentMax});
                prevMax = currentMax;
            }
        }
        
        return ans; 
    }
};