public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();
        ListNode head = null;

        /*
         * Input: head = [3,2,0,-4], pos = 1
         * Output: true
         * Explanation: There is a cycle in the linked list, 
         *              where the tail connects to the 1st node (0-indexed).
         */
        head = new ListNode(3, new ListNode(2, new ListNode(0, new ListNode(-4))));
        head.next.next.next.next = head.next;
        System.out.println(s.hasCycle(head));

        /*
         * Input: head = [1,2], pos = 0
         * Output: true
         * Explanation: There is a cycle in the linked list, 
         *              where the tail connects to the 0th node.
         */
        head = new ListNode(1, new ListNode(2));
        head.next.next = head;
        System.out.println(s.hasCycle(head));

        /*
         * Input: head = [1], pos = -1
         * Output: false
         * Explanation: There is no cycle in the linked list.
         */
        head = new ListNode(1);
        System.out.println(s.hasCycle(head));
    }
}
