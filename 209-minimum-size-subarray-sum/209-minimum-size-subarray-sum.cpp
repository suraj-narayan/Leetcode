class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int right = 0 , left = 0;
        int sum = 0 , min_l = INT_MAX ;
        while(right < nums.size()){
            if(sum < target)
                sum += nums[right++];
            while(sum >= target){
                if(right - left < min_l) min_l = right - left;
                sum -= nums[left++];
            }
        }
        return min_l == INT_MAX ? 0 : min_l;
    
    }
};