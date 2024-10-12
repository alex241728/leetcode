from typing import List, Self


class Solution:
    def removeDuplicates(self: Self, nums: List[int]) -> int:
        current: int = nums[0]
        index: int = 1
        for i in range(1, len(nums)):
            if nums[i] != current:
                nums[index] = nums[i]
                current = nums[index]
                index += 1
        return index