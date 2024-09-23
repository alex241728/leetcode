from typing import Dict, List, Self


class Solution:
    def wordPattern(self: Self, pattern: str, s: str) -> bool:
        l: int = len(pattern)
        sList: List[str] = s.split(' ')
        if len(sList) != l:
            return False

        pToS: Dict[str, str] = {}
        sToP: Dict[str, str] = {}

        for i in range(l):
            char: str = pattern[i]
            word: str = sList[i]
            
            if char not in pToS and word not in sToP:
                pToS[char] = word
                sToP[word] = char
            if char in pToS and word != pToS.get(char):
                return False
            if word in sToP and char != sToP.get(word):
                return False
        return True