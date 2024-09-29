from typing import Self, Dict


class Solution:
    def lengthOfLongestSubstring(self: Self, s: str) -> int:
        max_len: int = 0
        start_idx: int = 0
        past_chars: Dict[str, int] = {}

        for end_idx in range(len(s)):
            curr_char: str = s[end_idx]

            if curr_char in past_chars and past_chars[curr_char] >= start_idx:
                start_idx = past_chars[curr_char] + 1

            past_chars[curr_char] = end_idx
            max_len = max(max_len, end_idx - start_idx + 1)
            
        return max_len
