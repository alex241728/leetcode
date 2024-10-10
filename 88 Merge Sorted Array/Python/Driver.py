from typing import List
from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        nums1: List[int] = [1, 2, 3, 0, 0, 0]
        s.merge(nums1, 3, [2, 5, 6], 3)
        print(nums1)

        nums1: List[int] = [1]
        s.merge(nums1, 1, [], 0)
        print(nums1)

        nums1: List[int] = [0]
        s.merge(nums1, 0, [1], 1)
        print(nums1)