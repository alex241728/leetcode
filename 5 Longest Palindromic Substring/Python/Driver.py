from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        
        """_summary_
            Input: s = "babad"
            Output: "bab"
            Explanation: "aba" is also a valid answer.
        """
        print(s.longestPalindrome("babad"))
        
        """_summary_
            Input: s = "cbbd"
            Output: "bb"
        """
        print(s.longestPalindrome("cbbd"))