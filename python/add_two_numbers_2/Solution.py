from typing import Optional, Self

from linked_list.ListNode import ListNode


class Solution:
    def addTwoNumbers(
        self: Self, l1: Optional[ListNode], l2: Optional[ListNode]
    ) -> Optional[ListNode]:
        dummy: ListNode = ListNode(-1)
        current: ListNode = dummy

        carry: int = 0

        while l1 or l2:
            num: int = carry
            if l1:
                num += l1.val
                l1 = l1.next
            if l2:
                num += l2.val
                l2 = l2.next
            digit: int = num % 10
            carry = num // 10
            current.next = ListNode(digit)
            current = current.next

        if carry:
            current.next = ListNode(carry)

        return dummy.next
