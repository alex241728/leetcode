from Solution import Solution
from TreeNode import TreeNode


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        
        root: TreeNode = None
        
        """_summary_
            Input: root = [4,2,7,1,3,6,9]
            Output: [4,7,2,9,6,3,1]
        """
        root = TreeNode(4, TreeNode(2, TreeNode(1), TreeNode(3)), TreeNode(7, TreeNode(6), TreeNode(9)))
        TreeNode.printLevelOrder(s.invertTree(root))
        print()
        
        """_summary_
            Input: root = [2,1,3]
            Output: [2,3,1]
        """
        root = TreeNode(2, TreeNode(1), TreeNode(3))
        TreeNode.printLevelOrder(s.invertTree(root))
        print()
        
        """_summary_
            Input: root = []
            Output: []
        """
        root = None
        TreeNode.printLevelOrder(s.invertTree(root))
        print()
        
        