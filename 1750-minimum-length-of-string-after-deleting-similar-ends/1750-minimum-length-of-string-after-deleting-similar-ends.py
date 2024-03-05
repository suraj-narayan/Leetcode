class Solution:
    def minimumLength(self, s: str) -> int:
        n = len(s)
        left, right = 0, n-1
        
        while left!=right and s[left] == s[right]:
            c =s[left]
            i, j = left, right
            while i<n-1 and s[i]==c:
                i+=1
            while j>0 and s[j] ==c:
                j-=1
            left, right = i, j
            if j<i:
                return 0
        
        return right-left+1
            
        