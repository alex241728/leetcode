from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: s = "abcabcbb"
            Output: 3
            Explanation: The answer is "abc", with the length of 3.
        """
        print(s.lengthOfLongestSubstring("abcabcbb"))

        """_summary_
            Input: s = "bbbbb"
            Output: 1
            Explanation: The answer is "b", with the length of 1.
        """
        print(s.lengthOfLongestSubstring("bbbbb"))

        """_summary_
            Input: s = "pwwkew"
            Output: 3
            Explanation: The answer is "wke", with the length of 3.
            Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
        """
        print(s.lengthOfLongestSubstring("pwwkew"))
            