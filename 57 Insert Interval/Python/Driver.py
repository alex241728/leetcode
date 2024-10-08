from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
            Output: [[1,5],[6,9]]
        """
        print(s.insert([[1,3],[6,9]], [2,5]))

        """_summary_
            Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
            Output: [[1,2],[3,10],[12,16]]
            Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
        """
        print(s.insert([[1,2],[3,5],[6,7],[8,10],[12,16]], [4,8]))

        print(s.insert([[3,5], [12,15]], [6,6]))