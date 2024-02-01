class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        vector<vector<int>> empty_ans;
        int n = nums.size();
        if(n%3!=0)
            return ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i <n;i+=3) {
            if(nums[i+2]>nums[i]+k)
                return empty_ans;
            vector<int> temp = {nums[i], nums[i+1], nums[i+2]};
            ans.push_back(temp);
                
        }
        return ans;
    }
};