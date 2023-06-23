class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<unordered_map<int, int>> arr(n);
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                int t=nums[i]-nums[j];
                if(arr[j].find(t)!=arr[j].end()) {
                    arr[i][t]=arr[j][t]+1;
                }
                else
                    arr[i][t]=2;
                ans=max(ans, arr[i][t]);
            }
        }
        return ans;
    }
};