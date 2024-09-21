from typing import Dict, Self


class Solution:
    def canConstruct(self: Self, ransomNote: str, magazine: str) -> bool:
        if len(ransomNote) > len(magazine):
            return False
        
        charToNum: Dict[str, int] = {}
        for char in magazine:
            if char in charToNum:
                charToNum[char] += 1
            else:
                charToNum[char] = 1
        
        for char in ransomNote:
            if char in charToNum:
                charToNum[char] -= 1
                if charToNum[char] < 0:
                    return False
            else:
                return False
        
        return True