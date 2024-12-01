class ListNode:
    def __init__(self, val=0, next=None) -> None:
        self.val = val
        self.next = next

    @staticmethod
    def print(head: "ListNode") -> None:
        print('[', end='')
        while head.next:
            print(head.val, end=", ")
            head = head.next
        print(head.val, end="]\n")