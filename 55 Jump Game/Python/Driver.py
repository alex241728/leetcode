from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [2,3,1,1,4]
            Output: true
            Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
        """
        print(s.canJump([2, 3, 1, 1, 4]))

        """_summary_
            Input: nums = [3,2,1,0,4]
            Output: false
            Explanation: You will always arrive at index 3 no matter what. 
                         Its maximum jump length is 0, which makes it impossible to reach the last index.
        """
        print(s.canJump([3, 2, 1, 0, 4]))