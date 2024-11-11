from typing import Optional

from TreeNode import TreeNode


class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root == None:
            return root
        
        self.invertTree(root.left)
        self.invertTree(root.right)
        left: TreeNode = root.left
        root.left = root.right
        root.right = left
        return root