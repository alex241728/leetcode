public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        ListNode l1 = null;
        ListNode l2 = null;

        /*
         * Input: l1 = [2,4,3], l2 = [5,6,4]
         * Output: [7,0,8]
         * Explanation: 342 + 465 = 807.
         */
        l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
        l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
        ListNode.print(s.addTwoNumbers(l1, l2));

        /*
         * Input: l1 = [0], l2 = [0]
         * Output: [0]
         */
        l1 = new ListNode(0);
        l2 = new ListNode(0);
        ListNode.print(s.addTwoNumbers(l1, l2));

        /*
         * Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
         * Output: [8,9,9,9,0,0,0,1]
         */
        l1 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
        l2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
        ListNode.print(s.addTwoNumbers(l1, l2));
    }
}
