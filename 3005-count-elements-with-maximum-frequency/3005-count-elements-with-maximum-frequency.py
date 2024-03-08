class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        ump = defaultdict(int)
        for i in nums:
            ump[i] += 1
        max_freq = max(list(ump.values()))
        count = 0
        for key, num in ump.items():
            if num == max_freq:
                count += 1
        return count*max_freq