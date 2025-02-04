from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        
        """_summary_
            Input: digits = [1,2,3]
            Output: [1,2,4]
            Explanation: The array represents the integer 123.
            Incrementing by one gives 123 + 1 = 124.
            Thus, the result should be [1,2,4].
        """
        print(s.plusOne([1, 2, 3]))
        
        """_summary_
            Input: digits = [4,3,2,1]
            Output: [4,3,2,2]
            Explanation: The array represents the integer 4321.
            Incrementing by one gives 4321 + 1 = 4322.
            Thus, the result should be [4,3,2,2].
        """
        print(s.plusOne([4, 3, 2, 1]))
        
        
        """_summary_
            Input: digits = [9]
            Output: [1,0]
            Explanation: The array represents the integer 9.
            Incrementing by one gives 9 + 1 = 10.
            Thus, the result should be [1,0].
        """
        print(s.plusOne([9]))