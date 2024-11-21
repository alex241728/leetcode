from construct_binary_tree_from_inorder_and_postorder_traversal_106.Solution import (
    Solution,
)
from tree.binary_tree.TreeTraversal import printLevelOrder


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
            Output: [3,9,20,null,null,15,7]
        """
        printLevelOrder(s.buildTree([9, 3, 15, 20, 7], [9, 15, 7, 20, 3]))
        print()

        """
            Input: inorder = [-1], postorder = [-1]
            Output: [-1]
        """
        printLevelOrder(s.buildTree([-1], [-1]))
        print()
