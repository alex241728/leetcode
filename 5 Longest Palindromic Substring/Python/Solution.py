from typing import Self


class Solution:
    def longestPalindrome(self: Self, s: str) -> str:
        l: int = len(s)
        
        if l == 0:
            return ""
        
        def expandAroundCenter(s: str, left: int, right: int) -> int:
            while left >= 0 and right < l and s[left] == s[right]:
                left -= 1
                right += 1
            return right - left - 1
        
        start: int = 0
        end: int = 0
        
        for i in range(l):
            odd: int = expandAroundCenter(s, i, i)
            even: int = expandAroundCenter(s, i, i + 1)
            maxLen: int = max(odd, even)
            
            if maxLen > (end -  start):
                start = i - (maxLen - 1) // 2
                end = i + maxLen // 2
                
        return s[start : end + 1]
        