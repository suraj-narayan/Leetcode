class Solution:
    def countSubstrings(self, s: str) -> int:
        def isplain(st: str):
            curr_st:int = len(st)
            for k in range(int(curr_st/2)):
                if st[k] != st[curr_st-1-k]:
                    return False 
            return True
        str_len : int = len(s)
        ans : int = 0
        for i in range(str_len):
            for j in range(i, str_len):
                if isplain(s[i:j+1]):
                    ans += 1 
        return ans
                