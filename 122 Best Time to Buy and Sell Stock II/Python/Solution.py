from typing import List, Self


class Solution:
    def maxProfit(self: Self, prices: List[int]) -> int:
        m: int = 0
        idx: int = 0
        for i in range(len(prices)):
            previous: int = prices[idx]
            current: int = prices[i]
            if current >= previous:
                m += (current - previous)
            idx = i
        return m