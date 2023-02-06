class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        n=nums.size();
        vector<int> ans(n, 0);
        for(int i=0;i<n/2;i++) {
            ans[i*2]=nums[i];
        }
        for(int i=n/2;i<n;i++) {
            ans[2*(i-n/2)+1]=nums[i];
        }
        return ans;
    }
};