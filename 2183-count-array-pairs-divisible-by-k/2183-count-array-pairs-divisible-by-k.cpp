class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        long long ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            int gcd1=__gcd(nums[i], k);
            int gcd2=k/gcd1;
            
            if(gcd2==1) ans+=i;
            else
            {
                for(auto it: ump)
                {
                    if(it.first%gcd2==0) ans+=it.second;
                    
                }
            }
            ump[gcd1]++;
            
        }
        
        return ans;
        
    }
};