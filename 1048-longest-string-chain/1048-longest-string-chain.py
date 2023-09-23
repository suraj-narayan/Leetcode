class Solution:
    def longestStrChain(self, words: List[str]) -> int:
        dp = {}
        words.sort(key = len)
        ans = 0
        for word in words:
            dp[word] =1 
            for i in range(len(word)):
                temp = word[:i] + word[i+1:]
                if temp in dp:
                    dp[word] = max(dp[word], dp[temp]+1)
            ans = max(ans, dp[word])
            
        return ans
        