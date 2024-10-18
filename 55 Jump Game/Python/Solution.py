from typing import List, Self


class Solution:
    def canJump(self: Self, nums: List[int]) -> bool:
        m: int = 0
        i: int = 0
        while i < len(nums) - 1:
            if i == m and nums[i] == 0:
                return False
            m = max(m, i + nums[i])
            i += 1
        return m >= i