from typing import List, Self


class Solution:
    def majorityElement(self: Self, nums: List[int]) -> int:
        nums.sort()
        return nums[len(nums) // 2]
