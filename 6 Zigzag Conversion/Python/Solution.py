from typing import List


class Solution:
    def convert(self, s: str, numRows: int) -> str:
        l: int = len(s)
        
        if numRows == 1 or l <= numRows:
            return s
        
        result: str = ""
        max: int = 2 * (numRows - 1)
        for i in range(numRows):
            j: int = i
            while j < l:
                result += s[j]
                
                if i != 0 and i != numRows - 1:
                    secondIdx: int = j + max - 2 * i
                    if secondIdx < l:
                        result += s[secondIdx]
                
                j += max
        
        return result