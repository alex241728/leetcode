from typing import List, Self


class Solution:
    def merge(self: Self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
    
        left1: int = m - 1
        right1: int = len(nums1) - 1
        right2: int = n - 1

        while right2 >= 0:
            if left1 < 0 or nums2[right2] >= nums1[left1]:
                nums1[right1] = nums2[right2]
                right2 -= 1
            else:
                nums1[right1] = nums1[left1]
                left1 -= 1
            right1 -= 1