from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: ransomNote = "a", magazine = "b"
            Output: false
        """
        print(s.canConstruct("a", "b"))

        """_summary_
            Input: ransomNote = "aa", magazine = "ab"
            Output: false
        """
        print(s.canConstruct("aa", "ab"))

        """_summary_
            Input: ransomNote = "aa", magazine = "aab"
            Output: true
        """
        print(s.canConstruct("aa", "aab"))