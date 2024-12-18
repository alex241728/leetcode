from add_two_numbers_2.Solution import Solution
from linked_list.ListNode import ListNode


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: l1 = [2,4,3], l2 = [5,6,4]
            Output: [7,0,8]
            Explanation: 342 + 465 = 807.
        """
        l1: ListNode = ListNode(2, ListNode(4, ListNode(3)))
        l2: ListNode = ListNode(5, ListNode(6, ListNode(4)))
        ListNode.print(s.addTwoNumbers(l1, l2))

        """
            Input: l1 = [0], l2 = [0]
            Output: [0]
        """
        l1: ListNode = ListNode(0)
        l2: ListNode = ListNode(0)
        ListNode.print(s.addTwoNumbers(l1, l2))

        """
            Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
            Output: [8,9,9,9,0,0,0,1]
        """
        l1 = ListNode(
            9,
            ListNode(
                9, ListNode(9, ListNode(9, ListNode(9, ListNode(9, ListNode(9)))))
            ),
        )
        l2 = ListNode(9, ListNode(9, ListNode(9, ListNode(9))))
        ListNode.print(s.addTwoNumbers(l1, l2))
