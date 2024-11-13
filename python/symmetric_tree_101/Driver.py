from Solution import Solution
from tree.binary_tree.TreeNode import TreeNode


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: root = [1,2,2,3,4,4,3]
            Output: true
        """
        root: TreeNode = TreeNode(
            1,
            TreeNode(2, TreeNode(3), TreeNode(4)),
            TreeNode(2, TreeNode(4), TreeNode(3)),
        )
        print(s.isSymmetric(root))

        """
            Input: root = [1,2,2,null,3,null,3]
            Output: false
        """
        root: TreeNode = TreeNode(
            1,
            TreeNode(2, None, TreeNode(3)),
            TreeNode(2, None, TreeNode(3)),
        )
        print(s.isSymmetric(root))
