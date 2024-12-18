from typing import Dict, List


class Node:
    def __init__(self, x: int, next: "Node" = None, random: "Node" = None):
        self.val = int(x)
        self.next = next
        self.random = random

    @staticmethod
    def print(head: "Node") -> None:
        print(Node.__convertLinkedListToList(head))

    @staticmethod
    def __convertLinkedListToList(head: "Node"):
        nodeToIndex: Dict[Node, int] = {}

        current: Node = head
        index: int = 0
        while current:
            nodeToIndex[current] = index
            index += 1
            current = current.next

        result: List[List[int | None]] = []
        current = head
        while current:
            if current.random:
                result.append([current.val, nodeToIndex[current.random]])
            else:
                result.append([current.val, None])
            current = current.next

        return result
