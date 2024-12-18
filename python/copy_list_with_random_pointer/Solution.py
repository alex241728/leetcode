from typing import Optional

from linked_list.random_linked_list.Node import Node


class Solution:
    def copyRandomList(self, head: Optional[Node]) -> Optional[Node]:
        if not head:
            return None

        current: Node = head
        while current:
            next: Node = current.next
            current.next = Node(current.val, current.next)
            current.next.next = next
            current = current.next.next

        current = head
        while current:
            if current.random:
                current.next.random = current.random.next
            current = current.next.next

        current = head.next
        while current.next:
            current.next = current.next.next
            current = current.next

        return head.next
