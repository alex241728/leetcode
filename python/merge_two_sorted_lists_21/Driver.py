from merge_two_sorted_lists_21.Solution import Solution
from linked_list.ListNode import ListNode


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """
            Input: list1 = [1,2,4], list2 = [1,3,4]
            Output: [1,1,2,3,4,4]
        """
        list1: ListNode = ListNode(1, ListNode(2, ListNode(4)))
        list2: ListNode = ListNode(1, ListNode(3, ListNode(4)))
        ListNode.print(s.mergeTwoLists(list1, list2))

        """
            Input: list1 = [], list2 = []
            Output: []
        """
        ListNode.print(s.mergeTwoLists(None, None))

        """
            Input: list1 = [], list2 = [0]
            Output: [0]
        """
        ListNode.print(s.mergeTwoLists(None, ListNode(0)))
