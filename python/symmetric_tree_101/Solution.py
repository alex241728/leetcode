from typing import Optional

from tree.binary_tree.TreeNode import TreeNode


class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True

        return Solution.__isMirror(root.left, root.right)

    @staticmethod
    def __isMirror(left: Optional[TreeNode], right: Optional[TreeNode]) -> bool:
        if not left and not right:
            return True
        elif not left or not right:
            return False

        return (
            Solution.__isMirror(left.left, right.right)
            and Solution.__isMirror(left.right, right.left)
            and left.val == right.val
        )
