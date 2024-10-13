from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [3,2,3]
            Output: 3
        """
        print(s.majorityElement([3, 2, 3]))

        """_summary_
            Input: nums = [2,2,1,1,1,2,2]
            Output: 2
        """
        print(s.majorityElement([2, 2, 1, 1, 1, 2, 2]))