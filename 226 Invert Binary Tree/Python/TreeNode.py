from collections import deque
from typing import Deque, Self


class TreeNode:
    def __init__(self: Self, val=0, left=None, right=None) -> None:
        self.val = val
        self.left = left
        self.right = right
    
    @staticmethod
    def printLevelOrder(root: "TreeNode"):
        if not root:
            return
        
        q: Deque[TreeNode] = deque([root])
        
        while q:
            current: TreeNode = q.popleft()
            
            print(current.val, end=" ")
            
            if current.left:
                q.append(current.left)
            
            if current.right:
                q.append(current.right)
