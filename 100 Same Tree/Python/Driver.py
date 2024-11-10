from Solution import Solution
from TreeNode import TreeNode


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        
        p: TreeNode = None
        q: TreeNode = None
        
        """_summary_
            Input: p = [1,2,3], q = [1,2,3]
            Output: true
        """
        p = TreeNode(1, TreeNode(2), TreeNode(3))
        q = TreeNode(1, TreeNode(2), TreeNode(3))
        print(s.isSameTree(p, q))
        
        """_summary_
            Input: p = [1,2], q = [1,null,2]
            Output: false
        """
        p = TreeNode(1, TreeNode(2))
        q = TreeNode(1, None, TreeNode(2))
        print(s.isSameTree(p, q))
        
        """_summary_
            Input: p = [1,2,1], q = [1,1,2]
            Output: false
        """
        p = TreeNode(1, TreeNode(2), TreeNode(1))
        q = TreeNode(1, TreeNode(1), TreeNode(2))
        print(s.isSameTree(p, q))