class Solution:
    
    def util(self, nums: List[int], target: int, n: int) -> int:
        if not target:
            return 1
        if target<0:
            return 0
        if self.dp[target]!=-1:
            return self.dp[target]
        ans = 0
        for i in nums:
            ans = ans +  self.util(nums, target-i, n)
        self.dp[target]= ans
        return ans
    
    def combinationSum4(self, nums: List[int], target: int) -> int:
        self.dp = [-1 for _ in range(1001)]
        n = len(nums)
        return self.util(nums, target, n)
        
        