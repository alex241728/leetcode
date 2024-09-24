from typing import Dict, Self


class Solution:
    def isAnagram(self: Self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        map: Dict[str, int] = {}
        for c in s:
            if c in map:
                map[c] += 1
            else:
                map[c] = 1
        
        for c in t:
            if c not in map or map[c] == 0:
                return False
            map[c] -= 1
        
        return True