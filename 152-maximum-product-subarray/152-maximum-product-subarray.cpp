class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        vector<map<int, int>> memo(n+1, map<int, int>());
        return findMax(nums, n-1, nums[n-1], memo);
    }
    
    int findMax(vector<int> &nums, int n, int P, vector<map<int, int>> &memo){
        if(n==0)
            return P;
        
        if(memo[n].find(P) == memo[n].end()){
            memo[n][P] = max({
                    findMax(nums, n-1, P*nums[n-1], memo),
                    findMax(nums, n-1, nums[n-1], memo),
                    P
                }
            );
        }
        return memo[n][P];
    }
};