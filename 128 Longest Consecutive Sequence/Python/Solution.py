from typing import List, Self


class Solution:
    def longestConsecutive(self: Self, nums: List[int]) -> int:
        l: int = len(nums)

        if l == 0:
            return 0
        
        nums.sort()
        maxLen: int = 1
        consecutiveLen: int = 1
        for i in range(1, l):
            if nums[i] == nums[i-1] + 1:
                consecutiveLen += 1
            elif nums[i] == nums[i-1]:
                continue
            else:
                if consecutiveLen > maxLen:
                    maxLen = consecutiveLen
                consecutiveLen = 1

        if consecutiveLen > maxLen:
            maxLen = consecutiveLen
        
        return maxLen
