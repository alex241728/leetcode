from typing import List, Self


class Solution:
    def findMedianSortedArrays(self: Self, nums1: List[int], nums2: List[int]) -> float:
        merged: List[int] = []
        for num in nums1:
            merged.append(num)
        for num in nums2:
            merged.append(num)
        lenMerged: int = len(merged)
        merged.sort()
        
        if lenMerged % 2 == 1:
            return merged[lenMerged // 2]
        
        return (merged[lenMerged // 2 - 1] + merged[lenMerged // 2]) / 2
    

if __name__ == "__main__":
    s: Solution = Solution()
    """_summary_
        Input: nums1 = [1,3], nums2 = [2]
        Output: 2.00000
        Explanation: merged array = [1,2,3] and median is 2.
    """
    print(s.findMedianSortedArrays([1,3], [2]))

    """_summary_
        Input: nums1 = [1,2], nums2 = [3,4]
        Output: 2.50000
        Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
    """
    print(s.findMedianSortedArrays([1,2], [3,4]))