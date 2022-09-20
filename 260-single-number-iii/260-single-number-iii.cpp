class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long n=nums.size();
        long long xorr=0;
        for(auto i:nums)
            xorr= xorr ^ i;
        
         long long t=xorr & (-xorr);
        
        long long ans1=0, ans2=0;
        for(auto i: nums)
        {
            if(i&t)
                ans1 =ans1^i;
            
            else
                ans2=ans2^i;
    }
        return {(int)ans1,(int)ans2};
    }
};