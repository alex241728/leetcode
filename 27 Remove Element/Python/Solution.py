from typing import List, Self


class Solution:
    def removeElement(self: Self, nums: List[int], val: int) -> int:
        index: int = 0

        for i in range(len(nums)):
            if nums[i] != val:
                nums[index] = nums[i]
                index += 1
        return index