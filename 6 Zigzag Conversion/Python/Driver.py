from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        
        """_summary_
            Input: s = "PAYPALISHIRING", numRows = 3
            Output: "PAHNAPLSIIGYIR"
        """
        print(s.convert("PAYPALISHIRING", 3))
        
        """_summary_
            Input: s = "PAYPALISHIRING", numRows = 4
            Output: "PINALSIGYAHRPI"
        """
        print(s.convert("PAYPALISHIRING", 4))
        
        """_summary_
            Input: s = "A", numRows = 1
            Output: "A"
        """
        print(s.convert("A", 1))