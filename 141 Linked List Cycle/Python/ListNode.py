from typing import Optional, Self


class ListNode:
    def __init__(self: Self, val: int, next: Optional["ListNode"]):
        self.val = val
        self.next = next