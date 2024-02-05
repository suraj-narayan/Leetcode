class Solution:
    def firstUniqChar(self, s: str) -> int:
        from collections import defaultdict
        ump = {}
        first = defaultdict(int)
        
        for i, c in enumerate(s):
            if ump.get(c) is None:
                first[c] = i
                ump[c] =1
            else:
                ump[c] += 1
        
        for i, c in enumerate(s):
            if ump[c] == 1:
                return i
        return -1
        
                