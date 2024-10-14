from typing import List
from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [1,2,3,4,5,6,7], k = 3
            Output: [5,6,7,1,2,3,4]
            Explanation:
            rotate 1 steps to the right: [7,1,2,3,4,5,6]
            rotate 2 steps to the right: [6,7,1,2,3,4,5]
            rotate 3 steps to the right: [5,6,7,1,2,3,4]
        """
        nums: List[int] = [1,2,3,4,5,6,7]
        s.rotate(nums, 3)
        print(nums)

        """_summary_
            Input: nums = [-1,-100,3,99], k = 2
            Output: [3,99,-1,-100]
            Explanation: 
            rotate 1 steps to the right: [99,-1,-100,3]
            rotate 2 steps to the right: [3,99,-1,-100]
        """
        nums: List[int] = [-1,-100,3,99]
        s.rotate(nums, 2)
        print(nums)
