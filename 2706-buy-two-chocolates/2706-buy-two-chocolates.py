class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        prices.sort()
        b = prices[0]+prices[1]
        if b>money:
            return money
        return money - b