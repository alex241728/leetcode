from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [0,1,2,4,5,7]
            Output: ["0->2","4->5","7"]
            Explanation: The ranges are:
            [0,2] --> "0->2"
            [4,5] --> "4->5"
            [7,7] --> "7"
        """
        print(s.summaryRanges([0,1,2,4,5,7]))

        """_summary_
            Input: nums = [0,2,3,4,6,8,9]
            Output: ["0","2->4","6","8->9"]
            Explanation: The ranges are:
            [0,0] --> "0"
            [2,4] --> "2->4"
            [6,6] --> "6"
            [8,9] --> "8->9"
        """
        print(s.summaryRanges([0,2,3,4,6,8,9]))
