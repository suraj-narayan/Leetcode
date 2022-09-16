class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int ans=0, sum=0;
        unordered_map<int, int> ump;
        ump[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(ump.find(sum-k)!=ump.end())
                ans+=ump[sum-k];
            ump[sum]++;
        }
        return ans;
    }
};