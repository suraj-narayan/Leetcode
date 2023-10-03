class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        ump = {}
        for num in nums:
            if num not in ump:
                ump[num] = 1
            else:
                ump[num] += 1
        ans = 0
        for val in ump.values():
            a = val*(val-1)
            a /=2
            ans += a
        return int(ans)
            
            
        