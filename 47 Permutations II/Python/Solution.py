from typing import List, Self


class Solution:
    def backtrack(self: Self, nums: List[int], permutations: List[List[int]], permutation: List[int], consumed: List[int]) -> None:
        l: int = len(nums)
        if len(permutation) == l:
            if permutation not in permutations:
                permutations.append(permutation.copy())
            return
        
        for i in range(l):
            if i not in consumed:
                permutation.append(nums[i])
                consumed.append(i)
                self.backtrack(nums, permutations, permutation, consumed)
                consumed.pop()
                permutation.pop()
        
    def permuteUnique(self: Self, nums: List[int]) -> List[List[int]]:
        permutations: List[List[int]] = []
        self.backtrack(nums, permutations, [], [])
        return permutations