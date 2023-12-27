class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        vector<vector<int>>  empty_array;
        int n = nums.size();
        if(n%3!=0)
            return ans;
        sort(nums.begin(), nums.end());
        for(int i = 0;i<n/3;i++) {
            if(nums[i*3+2]-nums[i*3]>k)
                return empty_array;
            vector<int> temp; 
            for(int j =0 ;j <3;j++)
                temp.push_back(nums[i*3+j]);
            ans.push_back(temp);
                
        }
        return ans;
    }
};