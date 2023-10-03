class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, int> ump;
        for(int i=0;i<n;i++) {
            ump[nums[i]]++;
        }
        int ans = 0;
        for(auto i:ump) {
            int a = i.second;
            ans+= a*(a-1)/2;
        }
        return ans;
    }
};