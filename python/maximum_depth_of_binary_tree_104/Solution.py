from typing import Optional

from tree.binary_tree.TreeNode import TreeNode


class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0

        left: int = self.maxDepth(root.left)
        right: int = self.maxDepth(root.right)
        return 1 + max(left, right)