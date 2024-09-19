from typing import Self

MIN_INT: int = -2**31
MAX_INT: int = 2**31 - 1

class Solution:
    def reverse(self: Self, x: int) -> int:
        absX: int = abs(x)
        multiplier: int = 1
        if x < 0:
            multiplier = -1
        
        res: int = 0
        while absX > 0:
            res = res * 10 + absX % 10
            absX //= 10

        if res < MIN_INT or res > MAX_INT:
            return 0

        return res * multiplier
    

if __name__ == "__main__":
    s: Solution = Solution()

    """_summary_
        Input: x = 123
        Output: 321
    """
    print(s.reverse(123))

    """_summary_
        Input: x = -123
        Output: -321
    """
    print(s.reverse(-123))

    """_summary_
        Input: x = 120
        Output: 21
    """
    print(s.reverse(120))