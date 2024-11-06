from typing import List, Self


class Solution:
    def productExceptSelf(self: Self, nums: List[int]) -> List[int]:
        size: int = len(nums)
        result: List[int] = [1] * size
            
        i: int = 0
        multiple: int = 1
        for j in range(1, size):
            multiple *= nums[i]
            result[j] *= multiple
            i += 1
            
        i = size - 1
        multiple = 1
        for j in range(size - 2, -1, -1):
            multiple *= nums[i]
            result[j] *= multiple
            i -= 1
            
        return result