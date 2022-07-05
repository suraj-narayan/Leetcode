class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(auto el:s){
			
            if(!s.count(el-1)){
                int currStreak = 1;
				
                while(s.count(el+1)){
                    el++;
                    currStreak++;
                }
	
                ans = max(ans,currStreak);
            }
        }
        return ans;
        
        
    }
};