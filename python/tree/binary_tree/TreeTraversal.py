from collections import deque
from typing import Deque

from .TreeNode import TreeNode


def printInOrder(root: TreeNode):
    if not root:
        return

    printInOrder(root.left)

    print(root.val, end=" ")

    printInOrder(root.right)


def printPreOrder(root: TreeNode):
    if not root:
        return

    print(root.val, end=" ")

    printPreOrder(root.left)

    printPreOrder(root.right)


def printPostOrder(root: TreeNode):
    if not root:
        return

    printPostOrder(root.left)

    printPostOrder(root.right)

    print(root.val, end=" ")


def printLevelOrder(root: TreeNode):
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
