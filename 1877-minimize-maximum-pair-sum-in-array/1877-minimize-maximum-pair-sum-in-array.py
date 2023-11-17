class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        ans = 0
        nums.sort()
        n = len(nums)
        for i in range(n):
            ans = max(ans, nums[i]+nums[n-1-i])
        return ans