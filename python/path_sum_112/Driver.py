from path_sum_112.Solution import Solution
from tree.binary_tree.TreeNode import TreeNode


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
            Output: true
            Explanation: The root-to-leaf path with the target sum is shown.
        """
        root: TreeNode = TreeNode(
            5,
            TreeNode(4, TreeNode(11, TreeNode(7), TreeNode(2))),
            TreeNode(8, TreeNode(13), TreeNode(4, None, TreeNode(1))),
        )
        print(s.hasPathSum(root, 22))

        """
            Input: root = [1,2,3], targetSum = 5
            Output: false
            Explanation: There are two root-to-leaf paths in the tree:
            (1 --> 2): The sum is 3.
            (1 --> 3): The sum is 4.
            There is no root-to-leaf path with sum = 5.
        """
        root: TreeNode = TreeNode(1, TreeNode(2), TreeNode(3))
        print(s.hasPathSum(root, 5))

        """
            Input: root = [], targetSum = 0
            Output: false
            Explanation: Since the tree is empty, there are no root-to-leaf paths.
        """
        print(s.hasPathSum(None, 0))
