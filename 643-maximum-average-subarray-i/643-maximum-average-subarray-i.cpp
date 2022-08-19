class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0,final=0;
        for(int i=0;i<k;++i)
            ans+=nums[i];
        final=ans/k;
        for(int i=k;i<nums.size();++i){
            ans-=nums[i-k];
            ans+=nums[i];
            if(ans/k > final)
                final=ans/k;
        }
        return final;
    }
};