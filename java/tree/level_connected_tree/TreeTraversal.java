package tree.level_connected_tree;

import java.util.ArrayList;
import java.util.List;

public class TreeTraversal {
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
