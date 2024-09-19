from typing import List, Self


class Solution(object):
    def backtrack(self: Self, n: int, k: int, start: int, path: List[int], combinations: List[List[int]]) -> List[List[int]]:
        if len(path) == k:
            combinations.append(path.copy())
        
        for i in range(start, n+1):
            path.append(i)
            self.backtrack(n, k, i + 1, path, combinations)
            path.pop()
        
    def combine(self: Self, n: int, k: int) -> List[List[int]]:
        combinations: List[List[int]] = []
        self.backtrack(n, k, 1, [], combinations)
        return combinations


if __name__ == "__main__":
    s: Solution = Solution()

    """_summary_
        Input: n = 4, k = 2
        Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
        Explanation: There are 4 choose 2 = 6 total combinations.
        Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.
    """
    print(s.combine(4, 2))

    """_summary_
        Input: n = 1, k = 1
        Output: [[1]]
        Explanation: There is 1 choose 1 = 1 total combination.
    """
    print(s.combine(1, 1))