from typing import Dict, Self


class Solution:
    def romanToInt(self: Self, s: str) -> int:
        res: int = 0

        if "IV" in s or "IX" in s:
            res -= 2
        if "XL" in s or "XC" in s:
            res -= 20
        if "CD" in s or "CM" in s:
            res -= 200
        
        romanToInt: Dict[str, int] = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        for char in s:
            res += romanToInt[char]

        return res