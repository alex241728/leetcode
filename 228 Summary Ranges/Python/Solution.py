from typing import List, Self


class Solution:
    def appendRange(self: Self, ranges: List[str], startNum: int, endNum: int) -> None:
        if startNum == endNum:
            ranges.append(f"{startNum}")
        else:
            ranges.append(f"{startNum}->{endNum}")
    
    def summaryRanges(self: Self, nums: List[int]) -> List[str]:
        l: int = len(nums)

        if l == 0:
            return []
    
        startNum: int = nums[0]
        endNum: int = nums[0]
        ranges: List[str] = []
        for i in range(1, len(nums)):
            currentNum: int = nums[i]
            previousNum: int = nums[i-1]
            if currentNum == previousNum + 1:
                endNum = currentNum
            else:
                self.appendRange(ranges, startNum, endNum)
                startNum = currentNum
                endNum = currentNum

        self.appendRange(ranges, startNum, endNum)
        
        return ranges