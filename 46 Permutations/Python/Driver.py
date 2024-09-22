from Solution import Solution

class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [1,2,3]
            Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
        """
        print(s.permute([1,2,3]))

        """_summary_
            Input: nums = [0,1]
            Output: [[0,1],[1,0]]
        """
        print(s.permute([0,1]))

        """_summary_
            Input: nums = [1]
            Output: [[1]]
        """
        print(s.permute([1]))