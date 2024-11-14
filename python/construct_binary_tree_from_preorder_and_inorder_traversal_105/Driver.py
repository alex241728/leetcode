from construct_binary_tree_from_preorder_and_inorder_traversal_105.Solution import (
    Solution,
)
from tree.binary_tree.TreeTraversal import printLevelOrder


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
            Output: [3,9,20,null,null,15,7]
        """
        printLevelOrder(s.buildTree([3, 9, 20, 15, 7], [9, 3, 15, 20, 7]))
        print()

        """
            Input: preorder = [-1], inorder = [-1]
            Output: [-1]
        """
        printLevelOrder(s.buildTree([-1], [-1]))
        print()
