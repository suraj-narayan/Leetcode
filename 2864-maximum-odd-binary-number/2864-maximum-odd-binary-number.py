class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        sLen = len(s)
        count = 0
        for i in s:
            if i=='1':
                count+=1
        
        ans = ""
        ans+= '1'*(count-1)
        ans+= '0'*(sLen-count)
        ans+= '1'
        return ans