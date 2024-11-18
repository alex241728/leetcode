from flatten_binary_tree_to_linked_list_114.Solution import Solution
from tree.binary_tree.TreeNode import TreeNode
from tree.binary_tree.TreeTraversal import printLevelOrder


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: root = [1,2,5,3,4,null,6]
            Output: [1,null,2,null,3,null,4,null,5,null,6]
        """
        root: TreeNode = TreeNode(
            1, TreeNode(2, TreeNode(3), TreeNode(4)), TreeNode(5, None, TreeNode(6))
        )
        s.flatten(root)
        printLevelOrder(root)
        print()

        """
            Input: root = []
            Output: []
        """
        root = None
        s.flatten(root)
        printLevelOrder(root)
        print()

        """
            Input: root = [0]
            Output: [0]
        """
        root: TreeNode = TreeNode(0)
        s.flatten(root)
        printLevelOrder(root)
        print()
