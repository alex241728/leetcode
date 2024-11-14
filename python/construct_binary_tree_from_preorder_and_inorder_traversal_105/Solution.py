from typing import List, Optional

from tree.binary_tree.TreeNode import TreeNode


class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        if not inorder:
            return None

        num: int = preorder.pop(0)
        index: int = inorder.index(num)
        root = TreeNode(num)

        root.left = self.buildTree(preorder, inorder[:index])
        root.right = self.buildTree(preorder, inorder[index + 1 :])
        return root
