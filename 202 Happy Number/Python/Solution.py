from typing import List, Self


class Solution:
    def getProcessedNum(self: Self, n: int) -> int:
        num: int = 0
        while (n != 0):
            num += pow(n % 10, 2)
            n //= 10
        return num

    def isHappy(self: Self, n: int) -> bool:
        previous: List[int] = [n]
        while (True):
            num: int = self.getProcessedNum(n)
            if num == 1:
                return True
            if num in previous:
                return False
            n = num
            previous.append(n)