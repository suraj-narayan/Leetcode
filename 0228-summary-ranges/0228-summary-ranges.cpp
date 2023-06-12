class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n=nums.size();
        int i=0;
        while(i<n) {
            int j=i+1;
            while(j<n and nums[j]==nums[j-1]+1)
                j++;
            if(j==i+1)
            {
                ans.push_back(to_string(nums[i]));
            }
            else
            {
                string ans2=to_string(nums[i])+"->"+to_string(nums[j-1]);
                ans.push_back(ans2);
            }
            i=j;
        }
        return ans;
    }
};