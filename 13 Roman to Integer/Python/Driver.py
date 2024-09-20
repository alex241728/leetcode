from Solution import Solution

class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: s = "III"
            Output: 3
            Explanation: III = 3.
        """
        print(s.romanToInt("III"))

        """_summary_
            Input: s = "LVIII"
            Output: 58
            Explanation: L = 50, V= 5, III = 3.
        """
        print(s.romanToInt("LVIII"))

        """_summary_
            Input: s = "MCMXCIV"
            Output: 1994
            Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
        """
        print(s.romanToInt("MCMXCIV"))