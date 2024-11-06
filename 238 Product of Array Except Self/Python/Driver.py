from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        
        """_summary_
            Input: nums = [1,2,3,4]
            Output: [24,12,8,6]
        """
        print(s.productExceptSelf([1, 2, 3, 4]))
        
        """_summary_
            Input: nums = [-1,1,0,-3,3]
            Output: [0,0,9,0,0]
        """
        print(s.productExceptSelf([-1, 1, 0, -3, 3]))