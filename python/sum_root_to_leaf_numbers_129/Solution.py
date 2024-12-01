from typing import Optional

from tree.binary_tree.TreeNode import TreeNode


class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        return Solution.__sum(root, 0)

    @staticmethod
    def __sum(root: Optional[TreeNode], current: int) -> int:
        if not root:
            return 0

        current = current * 10 + root.val

        if not root.left and not root.right:
            return current

        return Solution.__sum(root.left, current) + Solution.__sum(root.right, current)