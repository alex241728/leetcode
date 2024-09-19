class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        num_to_index: dict[int, int] = {}
        i: int = 0
        while i < len(nums):
            num: int = nums[i]
            compliment: int = target - num
            if compliment in num_to_index:
                return [i, num_to_index[compliment]]
            num_to_index[num] = i
            i += 1

if __name__ == "__main__":
        s: Solution = Solution()
        """_summary_
            Example 1:
            Input: nums = [2,7,11,15], target = 9
            Output: [0,1]
            Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
        """
        print(s.twoSum([2,7,11,15], 9))

        """_summary_
            Example 2:
            Input: nums = [3,2,4], target = 6
            Output: [1,2]
        """
        print(s.twoSum([3,2,4], 6))

        """_summary_
            Example 3:
            Input: nums = [3,3], target = 6
            Output: [0,1]
        """
        print(s.twoSum([3,3], 6))