package libraries.tree.binary_tree.level_connected_tree;

import java.util.ArrayList;
import java.util.List;

public class Node {
  public int val;
  public Node left;
  public Node right;
  public Node next;

  public Node(int val) {
      this.val = val;
  }

  public Node(int val, Node left, Node right, Node next) {
    this.val = val;
    this.left = left;
    this.right = right;
    this.next = next;
  }

  public static void printLevelOrder(Node root) {
    if (root == null) {
      return;
    }

    List<Node> nodes = new ArrayList<>();
    nodes.add(root);

    while (!nodes.isEmpty()) {
      int levelSize = nodes.size();

      for (int i = 0; i < levelSize; i++) {
        Node current = nodes.removeFirst();

        System.out.print(current.val + " ");

        if (current.left != null) {
          nodes.add(current.left);
        }

        if (current.right != null) {
          nodes.add(current.right);
        }
      }
      System.out.print("# ");
    }
  }
}
