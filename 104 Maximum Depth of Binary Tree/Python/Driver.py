from Solution import Solution
from TreeNode import TreeNode

class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        
        root: TreeNode = None
        
        """_summary_
            Input: root = [3,9,20,null,null,15,7]
            Output: 3
        """
        root = TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))
        print(s.maxDepth(root))
        
        """_summary_
            Input: root = [1,null,2]
            Output: 2
        """
        root = TreeNode(1, None, TreeNode(2))
        print(s.maxDepth(root))