class Solution:
    def findSubsequences(self, a: List[int]) -> List[List[int]]:
        ans=[set()]
        n=len(a)
        def calc(i,s):
            if(i==n):
                if(len(s)>=2):
                    ans[0].add(s)
                return
            if(len(s) and s[-1]<=a[i]):
                calc(i+1,s+(a[i],))
            elif(len(s)==0):
                calc(i+1,s+(a[i],))
            calc(i+1,s)
        calc(0,tuple())
        return ans[0]