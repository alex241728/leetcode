from typing import List, Self


class Solution:
    def maxProfit(self: Self, prices: List[int]) -> int:
        m: int = 0
        idxAtSmallest: int = 0
        for i in range(len(prices)):
            smallestPrice: int = prices[idxAtSmallest]
            currentPrice: int = prices[i]
            if currentPrice < smallestPrice:
                idxAtSmallest = i
            else:
                m = max(m, currentPrice - smallestPrice)
        return m

