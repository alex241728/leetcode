from typing import List, Self


class Solution:
    def merge(self: Self, intervals: List[List[int]]) -> List[List[int]]:
        merged: List[List[int]] = []
        intervals.sort(key=lambda x: x[0])

        previous = intervals[0]
        for i in range(1, len(intervals)):
            current = intervals[i]

            if previous[1] >= current[0]:
                previous[1] = max(previous[1], current[1])
            else:
                merged.append(previous)
                previous = current

        merged.append(previous)
        
        return merged
