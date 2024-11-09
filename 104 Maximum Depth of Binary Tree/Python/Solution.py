from TreeNode import TreeNode

from typing import Optional


class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root == None:
            return 0
        
        left: int = self.maxDepth(root.left)
        right: int = self.maxDepth(root.right)
        return 1 + max(left, right)
            