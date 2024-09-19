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
    

if __name__ == "__main__":
    s: Solution = Solution()

    """_summary_
        Input: l1 = [2,4,3], l2 = [5,6,4]
        Output: [7,0,8]
        Explanation: 342 + 465 = 807.
    """
    l1: ListNode = ListNode(2, ListNode(4, ListNode(3)))
    l2: ListNode = ListNode(5, ListNode(6, ListNode(4)))
    ret: ListNode = s.addTwoNumbers(l1, l2)
    ret.print_list()

    """_summary_
        Input: l1 = [0], l2 = [0]
        Output: [0]
    """
    l1: ListNode = ListNode(0)
    l2: ListNode = ListNode(0)
    ret: ListNode = s.addTwoNumbers(l1, l2)
    ret.print_list()

    """_summary_
        Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
        Output: [8,9,9,9,0,0,0,1]
    """
    l1: ListNode = ListNode(9, ListNode(9, ListNode(9, ListNode(9, ListNode(9, ListNode(9, ListNode(9)))))))
    l2: ListNode = ListNode(9, ListNode(9 ,ListNode(9, ListNode(9))))
    ret: ListNode = s.addTwoNumbers(l1, l2)
    ret.print_list()