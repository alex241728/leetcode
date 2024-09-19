from typing import List, Self


class Solution:
    def intToRoman(self: Self, num: int) -> str:
        integers: List[int] = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        symbols: List[str] = ['M', "CM", 'D', "CD", 'C', "XC", 'L', "XL", 'X', "IX", 'V', "IV", 'I']

        res: str = ''
        i: int = 0
        while i < len(integers):
            if num == 0:
                return res
            n: int = num // integers[i]
            res += n * symbols[i]
            num %= integers[i]
            i += 1
        
        return res 