from typing import Optional

from tree.linked_list import ListNode


class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head:
            return head

        times: int = k % Solution.__size(head)

        if times == 0:
            return head

        slow: ListNode = head
        fast: ListNode = head

        i: int = 0
        while i < times:
            fast = fast.next
            i += 1

        while fast.next:
            slow = slow.next
            fast = fast.next

        fast.next = head
        head = slow.next
        slow.next = None

        return head


    @staticmethod
    def __size(head: ListNode) -> int:
        size: int = 0
        while head:
            size += 1
            head = head.next
        return size