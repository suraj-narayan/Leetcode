class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> ump;
        for(int i:nums)
            ump[i]++;
        vector<int> ans;
        for(auto i:ump) {
            int j =i.first;
            int k = i.second;
            if(k>nums.size()/3)
                ans.push_back(j);
            
        }
        return ans;
    }
};