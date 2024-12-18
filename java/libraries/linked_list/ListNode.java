package libraries.linked_list;

public class ListNode {
  public int val;
  public ListNode next;

  public ListNode(int val) {
    this.val = val;
    this.next = null;
  }

  public ListNode(int val, ListNode next) {
    this.val = val;
    this.next = next;
  }

  public static void println(ListNode head) {
      if (head == null) {
          System.out.println("[]");
      }

      System.out.print('[');
      while (head.next != null) {
          System.out.print(head.val + ", ");
          head = head.next;
      }
      System.out.println(head.val + "]");
  }
}
