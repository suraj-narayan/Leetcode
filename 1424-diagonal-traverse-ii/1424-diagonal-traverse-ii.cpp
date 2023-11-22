class Solution {
public:
    
    
    
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<int>> mp;
        int m =nums.size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<nums[i].size();j++) {
                mp[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> ans;
        for(auto i:mp) {
            for(int j=i.second.size()-1;j>-1;j--) 
                ans.push_back(i.second[j]);
        }
        return ans;
    }
};