from typing import Optional

from tree.binary_tree.TreeNode import TreeNode


class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        while root:
            if root.left:
                successor: TreeNode = Solution.__findSuccessor(root)
                successor.right = root.right
                root.right = root.left
                root.left = None
            root = root.right

    @staticmethod
    def __findSuccessor(root: TreeNode) -> TreeNode:
        root = root.left
        while root.right:
            root = root.right
        return root
