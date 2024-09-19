from typing import Dict, List, Self


class Solution:
    def backtrack(self: Self, digits: str, mapping: Dict[str, List[str]], index: int, path: List[str], combinations: List[str]) -> None:
        if len(path) == len(digits):
            combinations.append(''.join(path))
            return
        
        possible_chars: List[str] = mapping.get(digits[index])

        for char in possible_chars:
            path.append(char)
            self.backtrack(digits, mapping, index + 1, path, combinations)
            path.pop()


    def letterCombinations(self: Self, digits: str) -> list[str]:
        combinations: List[str] = []
        if len(digits) == 0:
            return combinations
        
        mapping: Dict[str, List[str]] = {
                                            '2': ['a', 'b', 'c'],
                                            '3': ['d', 'e', 'f'],
                                            '4': ['g', 'h', 'i'],
                                            '5': ['j', 'k', 'l'],
                                            '6': ['m', 'n', 'o'],
                                            '7': ['p', 'q', 'r', 's'],
                                            '8': ['t', 'u', 'v'],
                                            '9': ['w', 'x', 'y', 'z']
                                        }
        self.backtrack(digits, mapping, 0, [], combinations)
        return combinations
        
if __name__ == "__main__":
    s: Solution = Solution()
    
    """_summary_
        Example 1:
        Input: digits = "23"
        Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
    """
    print(s.letterCombinations("23"))

    """_summary_
        Example 2:
        Input: digits = ""
        Output: []
    """
    print(s.letterCombinations(''))

    """_summary_
        Input: digits = "2"
        Output: ["a","b","c"]
    """
    print(s.letterCombinations('2'))

