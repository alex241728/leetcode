from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
        Input: points = [[1,1],[2,2],[3,3]]
        Output: 3
        """
        print(s.maxPoints([[1,1],[2,2],[3,3]]))

        """_summary_
            Input: points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
            Output: 4
        """
        print(s.maxPoints([[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]))