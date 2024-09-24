from Solution import Solution

class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: s = "anagram", t = "nagaram"
            Output: true
        """
        print(s.isAnagram("anagram", "nagaram"))

        """_summary_
            Input: s = "rat", t = "car"
            Output: false
        """
        print(s.isAnagram("rat", "car"))