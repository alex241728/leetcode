from typing import List, Self


class Solution:
    def merge(self: Self, intervals: List[List[int]]) -> List[List[int]]:
        merged: List[List[int]] = []

        previous: List[int] = intervals[0]
        for i in range(1, len(intervals)):
            current: List[int] = intervals[i]
            if previous[1] >= current[0]:
                previous[1] = max(previous[1], current[1])
            else:
                merged.append(previous)
                previous = current
        merged.append(previous)
        
        return merged

    def insert(self: Self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        l: int = len(intervals)
        if l == 0:
            return [newInterval]
        
        isInIntervals: bool = False
        for i in range(l):
            if newInterval[0] < intervals[i][0]:
                intervals.insert(i, newInterval)
                isInIntervals = True
        if not isInIntervals:
            intervals.append(newInterval)

        merged: List[int] = self.merge(intervals)
        return merged
            