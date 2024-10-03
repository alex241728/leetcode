from typing import Optional, Self

from ListNode import ListNode


class Solution:
    def hasCycle(self: Self, head: Optional[ListNode]) -> bool:
        if head == None or head.next == None:
            return False
        
        slow: ListNode = head
        fast: ListNode = head

        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                return True
            
        return False