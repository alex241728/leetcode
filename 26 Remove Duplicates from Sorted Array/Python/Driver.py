from typing import List
from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [1,1,2]
            Output: 2, nums = [1,2,_]
            Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
            It does not matter what you leave beyond the returned k (hence they are underscores).
        """
        nums: List[int] = [1, 1, 2]
        print(s.removeDuplicates(nums))
        print(nums)

        """_summary_
            Input: nums = [0,0,1,1,1,2,2,3,3,4]
            Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
            Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
            It does not matter what you leave beyond the returned k (hence they are underscores).
        """
        nums: List[int] = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
        print(s.removeDuplicates(nums))
        print(nums)