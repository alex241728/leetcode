from Solution import Solution

class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: num = 3749
            Output: "MMMDCCXLIX"

            Explanation:
            3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
            700 = DCC as 500 (D) + 100 (C) + 100 (C)
            40 = XL as 10 (X) less of 50 (L)
            9 = IX as 1 (I) less of 10 (X)
            Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places
        """
        print(s.intToRoman(3749))

        """_summary_
            Input: num = 58

            Output: "LVIII"

            Explanation:
            50 = L
            8 = VIII
        """
        print(s.intToRoman(58))

        """_summary_
            Input: num = 1994

            Output: "MCMXCIV"

            Explanation:
            1000 = M
            900 = CM
            90 = XC
            4 = IV
        """
        print(s.intToRoman(1994))