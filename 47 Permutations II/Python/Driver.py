from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [1,1,2]
            Output:
            [[1,1,2],
             [1,2,1],
             [2,1,1]]
        """
        print(s.permuteUnique([1,1,2]))

        """_summary_
            Input: nums = [1,2,3]
            Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
        """
        print(s.permuteUnique([1,2,3]))