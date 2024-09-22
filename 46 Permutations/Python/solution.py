from typing import List, Self


class Solution:
    def backtrack(self: Self, nums: List[int], path: List[int], permutations: List[List[int]]) -> None:
        if len(path) == len(nums):
            permutations.append(path.copy())
        
        for num in nums:
            if num not in path:
                path.append(num)
                self.backtrack(nums, path, permutations)
                path.pop()

    def permute(self: Self, nums: List[int]) -> List[List[int]]:
        permutations: List[List[int]] = []
        self.backtrack(nums, [], permutations)
        return permutations