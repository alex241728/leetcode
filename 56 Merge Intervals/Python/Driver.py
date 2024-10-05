from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
            Output: [[1,6],[8,10],[15,18]]
            Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
        """
        print(s.merge([[1,3],[2,6],[8,10],[15,18]]))

        """_summary_
            Input: intervals = [[1,4],[4,5]]
            Output: [[1,5]]
            Explanation: Intervals [1,4] and [4,5] are considered overlapping.
        """
        print(s.merge([[1,4],[4,5]]))