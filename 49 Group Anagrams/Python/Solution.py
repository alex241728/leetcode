from collections import defaultdict
from typing import Dict, List, Self



class Solution:
    def groupAnagrams(self: Self, strs: List[str]) -> List[List[str]]:
        map: Dict[str, List[str]] = defaultdict(list)

        for word in strs:
            sortedWord = ''.join(sorted(word))
            map[sortedWord].append(word)

        return list(map.values())
