from typing import Optional, Self


class ListNode(object):
    def __init__(self: Self, val: int = 0, next: Optional["ListNode"] = None):
        self.val = val
        self.next = next

    def print_list(self: Self):
        print('[', end='')
        temp: ListNode = self
        while (temp.next != None):
            print(temp.val, end=", ")
            temp = temp.next
        print(temp.val, end='')
        print(']')
        