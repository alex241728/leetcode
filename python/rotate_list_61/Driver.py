from rotate_list_61.Solution import Solution
from tree.linked_list.ListNode import ListNode


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: head = [1,2,3,4,5], k = 2
            Output: [4,5,1,2,3]
        """
        head: ListNode = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
        ListNode.print(s.rotateRight(head, 2))

        """
            Input: head = [0,1,2], k = 4
            Output: [2,0,1]
        """
        head: ListNode = ListNode(0, ListNode(1, ListNode(2)))
        ListNode.print(s.rotateRight(head, 4))