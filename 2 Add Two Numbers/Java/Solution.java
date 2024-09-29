public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(-1, null);
        ListNode current = dummy;

        int carry = 0;

        while (l1 != null || l2 != null) {
            int num = carry;

            if (l1 != null) {
                num += l1.val;
                l1 = l1.next;
            }

            if (l2 != null) {
                num += l2.val;
                l2 = l2.next;
            }

            int digit = num % 10;
            carry = num / 10;
            current.next = new ListNode(digit);
            current = current.next;
        }

        if (carry != 0) {
            current.next = new ListNode(carry);
        }

        return dummy.next;
    }
}