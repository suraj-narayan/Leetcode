class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int pos=lower_bound(nums.begin(), nums.end(), 0)-nums.begin();
        int low=pos-1;
        int high=pos;
        vector<int> ans;
        while(low>-1 and high<nums.size())
        {
            if(abs(nums[low])<abs(nums[high]))
            {
                ans.push_back(nums[low]*nums[low]);
                low--;
                
            }
            else
            {
                ans.push_back(nums[high]*nums[high]);
                high++;
            }
            
        }
        while(low>-1)
        {
            ans.push_back(nums[low]*nums[low]);
            low--;
        }
        while(high<nums.size())
        {
            ans.push_back(nums[high]*nums[high]);
            high++;
        }
        return ans;
        
        
        
    }
};