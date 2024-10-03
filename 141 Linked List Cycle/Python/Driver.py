from Solution import Solution
from ListNode import ListNode


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: head = [3,2,0,-4], pos = 1
            Output: true
            Explanation: There is a cycle in the linked list, 
                         where the tail connects to the 1st node (0-indexed).
        """
        head = ListNode(3, ListNode(2, ListNode(0, ListNode(-4, None))))
        head.next.next.next.next = head.next
        print(s.hasCycle(head))

        """_summary_
            Input: head = [1,2], pos = 0
            Output: true
            Explanation: There is a cycle in the linked list, 
                         where the tail connects to the 0th node.
        """
        head = ListNode(1, ListNode(2, None))
        head.next.next = head
        print(s.hasCycle(head))

        """_summary_
            Input: head = [1], pos = -1
            Output: false
            Explanation: There is no cycle in the linked list.
        """
        head = ListNode(1, None)
        print(s.hasCycle(head))