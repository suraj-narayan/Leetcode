class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        count = 0
        if n<0:
            return False
        while n:
            count += n&1
            n = int(n/2)
        return True if count == 1 else False