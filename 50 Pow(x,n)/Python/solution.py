from typing import Self


class Solution:
    def myPow(self: Self, x: float, n: int) -> float:
        if n == 0:
            return 1
        if n < 0:
            return 1 / self.myPow(x, -n)
        
        if n % 2:
            return x * self.myPow(x * x, n // 2)
        return self.myPow(x * x, n // 2)
    
if __name__ == "__main__":
    s: Solution = Solution()

    """_summary_
        Input: x = 2.00000, n = 10
        Output: 1024.00000
    """
    print(s.myPow(2.00000, 10))

    """_summary_
        Input: x = 2.10000, n = 3
        Output: 9.26100
    """
    print(s.myPow(2.10000, 3))

    """_summary_
        Input: x = 2.00000, n = -2
        Output: 0.25000
        Explanation: 2-2 = 1/22 = 1/4 = 0.25
    """
    print(s.myPow(2.00000, -2))