class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> ump;
        for(int i:nums) {
            ump[i]++;
        }
        for(auto i:ump) {
            if(i.second==1)
                return i.first;
        }
        return -1;
    }
};