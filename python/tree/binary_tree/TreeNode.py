from typing import Self


class TreeNode:
    def __init__(self: Self, val=0, left=None, right=None) -> None:
        self.val = val
        self.left = left
        self.right = right
