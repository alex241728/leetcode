from typing import Optional

from tree.binary_tree.TreeNode import TreeNode


class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root:
            return root

        self.invertTree(root.left)
        self.invertTree(root.right)
        left: TreeNode = root.left
        root.left = root.right
        root.right = left
        return root
