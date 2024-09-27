from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: nums = [1,2,3,1], k = 3
            Output: true
        """
        print(s.containsNearbyDuplicate([1,2,3,1], 3))

        """_summary_
            Input: nums = [1,0,1,1], k = 1
            Output: true
        """
        print(s.containsNearbyDuplicate([1,0,1,1], 1))

        """_summary_
            Input: nums = [1,2,3,1,2,3], k = 2
            Output: false
        """
        print(s.containsNearbyDuplicate([1,2,3,1,2,3], 2))