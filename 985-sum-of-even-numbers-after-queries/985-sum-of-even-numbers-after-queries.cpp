class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(auto i:nums) {
            if(!(i&1))
                sum+=i;
        }
        
        vector<int> ans;
        
        int n=queries.size();
        for(int i=0;i<n;i++) {
            int index=queries[i][1];
            int val=queries[i][0];
            
            if(nums[index]&1) {
                nums[index]+=val;
                if(nums[index]%2==0)
                    sum+=nums[index];
            }
            
            else
            {
                sum-=nums[index];
                nums[index]+=val;
                if(nums[index]%2==0)
                    sum+=nums[index];
            }
            ans.push_back(sum);
            
            
            
        }
        
        return ans;
    }
};