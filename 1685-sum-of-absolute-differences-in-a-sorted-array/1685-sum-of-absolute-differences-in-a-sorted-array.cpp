class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(nums.begin(), nums.end());
        for(int i=1;i<n;i++ )
            nums[i]+=nums[i-1];
        vector<int> ans;
        for(int i=0;i<n;i++) {
            if( i== 0) 
            {
                ans.push_back(nums[n-1]-nums[0] - (n-i-1)*arr[0]);
            }
            else
            {
                int val = nums[n-1]-nums[i] - ((n-i-1)*arr[i]);
                val += (i*arr[i]) - nums[i-1];
                ans.push_back(val);
            }
        }
        return ans;
        
    }
};