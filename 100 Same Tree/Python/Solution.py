from typing import Optional

from TreeNode import TreeNode


class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if not p and not q:
            return True
        elif not p or not q:
            return False
        
        left: bool = self.isSameTree(p.left, q.left)
        right: bool = self.isSameTree(p.right, q.right)
        return left and right and p.val == q.val