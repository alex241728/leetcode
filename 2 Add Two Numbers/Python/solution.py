from typing import Optional, Self

from ListNode import ListNode

class Solution(object):
    def addTwoNumbers(self: Self, l1: ListNode, l2: ListNode) -> ListNode:
        dummy: ListNode = ListNode(-1)
        p: ListNode = dummy
        carry: int = 0

        while (l1 is not None or l2 is not None):
            num: int = 0
            if l1 is not None:
                num += l1.val
                l1 = l1.next

            if l2 is not None:
                num += l2.val
                l2 = l2.next

            num += carry

            if num >= 10:
                p.next = ListNode(num % 10)
                carry = 1
            else:
                p.next = ListNode(num)
                carry = 0

            p = p.next

        if carry is not 0:
            p.next = ListNode(carry)
        
        return dummy.next
    