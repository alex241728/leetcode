from typing import Self


class Solution:
    def isPalindrome(self: Self, x: int) -> bool:
        if x < 0:
            return False
        
        rev: int = 0
        temp: int = x
        while temp != 0:
            digit: int = temp % 10
            rev = rev * 10 + digit
            temp //= 10

        if rev == x:
            return True
        return False