from copy_list_with_random_pointer.Solution import Solution
from linked_list.random_linked_list.Node import Node


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
            Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]
        """
        head: Node = Node(7, Node(13, Node(11, Node(10, Node(1)))))
        head.random = None
        head.next.random = head
        head.next.next.random = head.next.next.next.next
        head.next.next.next.random = head.next.next
        head.next.next.next.next.random = head
        Node.print(s.copyRandomList(head))

        """
            Input: head = [[1,1],[2,1]]
            Output: [[1,1],[2,1]]
        """
        head: Node = Node(1, Node(2))
        head.random = head.next
        head.next.random = head.next
        Node.print(s.copyRandomList(head))

        """
            Input: head = [[3,null],[3,0],[3,null]]
            Output: [[3,null],[3,0],[3,null]]
        """
        head: Node = Node(3, Node(3, Node(3)))
        head.random = None
        head.next.random = head
        head.next.next.random = None
        Node.print(s.copyRandomList(head))