from typing import List, Optional, Self

from tree.binary_tree.TreeNode import TreeNode


class Solution:
    def buildTree(
        self: Self, inorder: List[int], postorder: List[int]
    ) -> Optional[TreeNode]:
        if len(inorder) == 0:
            return None

        num: int = postorder.pop()
        index: int = inorder.index(num)

        root = TreeNode(num)
        root.right = self.buildTree(inorder[index + 1 :], postorder)
        root.left = self.buildTree(inorder[:index], postorder)

        return root
