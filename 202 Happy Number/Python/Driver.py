from Solution import Solution

class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: n = 19
            Output: true
            Explanation:
            12 + 92 = 82
            82 + 22 = 68
            62 + 82 = 100
            12 + 02 + 02 = 1
        """
        print(s.isHappy(19))

        """_summary_
            Input: n = 2
            Output: false
        """
        print(s.isHappy(2))