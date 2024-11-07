from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        
        """_summary_
            Input: height = [1,8,6,2,5,4,8,3,7]
            Output: 49
            Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
                         In this case, the max area of water (blue section) the container can contain is 49.
        """
        print(s.maxArea([1,8,6,2,5,4,8,3,7]))
        
        """_summary_
            Input: height = [1,1]
            Output: 1
        """
        print(s.maxArea([1,1]))