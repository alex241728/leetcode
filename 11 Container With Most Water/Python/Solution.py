from typing import List, Self


class Solution:
    def maxArea(self: Self, height: List[int]) -> int:
        left: int = 0
        right: int = len(height) - 1
        maxWater = 0
        while left < right:
            water: int = min(height[left], height[right]) * (right - left)
            maxWater = max(maxWater, water)
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return maxWater