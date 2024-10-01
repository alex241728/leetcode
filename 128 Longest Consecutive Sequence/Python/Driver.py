from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [100,4,200,1,3,2]
            Output: 4
            Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. 
                         Therefore its length is 4.
        """
        print(s.longestConsecutive([100,4,200,1,3,2]))

        """_summary_
            Input: nums = [0,3,7,2,5,8,4,6,0,1]
            Output: 9
        """
        print(s.longestConsecutive([0,3,7,2,5,8,4,6,0,1]))