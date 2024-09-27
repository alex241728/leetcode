from typing import Dict, List, Self


class Solution:
    def containsNearbyDuplicate(self: Self, nums: List[int], k: int) -> bool:
        numToIdx: Dict[int, int] = {}
        for i in range(len(nums)):
            num: int = nums[i]
            if num in numToIdx and (i - numToIdx[num]) <= k:
                return True
            numToIdx[num] = i
        return False