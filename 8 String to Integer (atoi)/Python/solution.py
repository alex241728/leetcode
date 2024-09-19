MIN_INT: int = - 2**31
MAX_INT: int = 2**31 - 1

class Solution:
    def myAtoi(self, s: str) -> int:
        i: int = 0

        while i < len(s) and s[i] == ' ':
            i += 1
        
        if i >= len(s):
            return 0
        
        multiplier: int = 1
        if s[i] == '+' or s[i] == '-':
            if s[i] == '-':
                multiplier = -1
            i += 1

        if i >= len(s):
            return 0

        res: int = 0
        while i < len(s) and s[i].isdigit():
            res = res * 10 + int(s[i])
            
            if res * multiplier <= MIN_INT:
                return MIN_INT
            elif res * multiplier >= MAX_INT:
                return MAX_INT
            i += 1

        return res * multiplier
    

if __name__ == "__main__":
    s: Solution = Solution()
    """_summary_
        Input: s = "42"
        Output: 42
        Explanation:
        The underlined characters are what is read in and the caret is the current reader position.
        Step 1: "42" (no characters read because there is no leading whitespace)
        Step 2: "42" (no characters read because there is neither a '-' nor '+')
        Step 3: "42" ("42" is read in)
    """
    print(s.myAtoi("42"))

    """_summary_
        Input: s = " -042"
        Output: -42
        Explanation:
        Step 1: "   -042" (leading whitespace is read and ignored)
        Step 2: "   -042" ('-' is read, so the result should be negative)
        Step 3: "   -042" ("042" is read in, leading zeros ignored in the result)
    """
    print(s.myAtoi(" -042"))
    
    """_summary_
        Input: s = "1337c0d3"
        Output: 1337
        Explanation:
        Step 1: "1337c0d3" (no characters read because there is no leading whitespace)
        Step 2: "1337c0d3" (no characters read because there is neither a '-' nor '+')
        Step 3: "1337c0d3" ("1337" is read in; reading stops because the next character is a non-digit)
    """
    print(s.myAtoi("1337c0d3"))

    """_summary_
        Input: s = "0-1"
        Output: 0
        Explanation:
        Step 1: "0-1" (no characters read because there is no leading whitespace)
        Step 2: "0-1" (no characters read because there is neither a '-' nor '+')
        Step 3: "0-1" ("0" is read in; reading stops because the next character is a non-digit)
    """
    print(s.myAtoi("0-1"))

    """_summary_
        Input: s = "words and 987"
        Output: 0
        Explanation:
        Reading stops at the first non-digit character 'w'.
    """
    print(s.myAtoi("words and 987"))

