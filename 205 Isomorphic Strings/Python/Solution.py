from typing import Dict, Self


class Solution:
    def isIsomorphic(self: Self, s: str, t: str) -> bool:
        l: int = len(s)
        
        sToT: Dict[str, str] = {}
        tToS: Dict[str, str] = {}
        for i in range(l):
            charS: str = s[i]
            charT: str = t[i]
            
            if charS not in sToT and charT not in tToS:
                sToT[charS] = charT
                tToS[charT] = charS
            if charS in sToT and sToT[charS] != charT:
                return False
            if charT in tToS and tToS[charT] != charS:
                return False
    
        return True