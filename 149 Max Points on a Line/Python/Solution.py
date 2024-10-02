from typing import Dict, List, Self, Set


class Solution:
    def maxPoints(self: Self, points: List[List[int]]) -> int:
        l: int = len(points)
        if l == 0:
            return 1
        
        lines: Dict[str, Set[str]] = {}
        m: int = 0

        for i in range(l):
            for j in range (i, l):
                p1: List[int] = points[i]
                [x1, y1] = [p1[0], p1[1]]
                p2: List[int] = points[j]
                [x2, y2] = [p2[0], p2[1]]

                k: str = ''
                b: str = ''
                if x1 == x2:
                    k = "undefined"
                    b = x1
                else:
                    k = (y2 - y1) / (x2 - x1)
                    b = y1 - k * x1
                line: str = f"{k},{b}"

                if line in lines:
                    lines[line].add(f"{x1},{y1}")
                    lines[line].add(f"{x2},{y2}")
                    m = max(m, len(lines[line]))
                else:
                    lines[line] = set()
                    lines[line].add(f"{x1},{y1}")
                    lines[line].add(f"{x2},{y2}")
                    m = max(m, len(lines[line]))

        return m