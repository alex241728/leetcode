package populating_next_right_pointers_in_each_node_ii_117;

import tree.level_connected_tree.Node;

import java.util.LinkedList;
import java.util.Queue;

class Solution {
  public Node connect(Node root) {
    if (root == null) {
      return null;
    }

    Queue<Node> queue = new LinkedList<>();
    queue.offer(root);

    while (!queue.isEmpty()) {
      int levelSize = queue.size();
      Node prev = null;

      for (int i = 0; i < levelSize; i++) {
        Node current = queue.poll();

        if (prev == null) {
          prev = current;
        } else {
          prev.next = current;
        }

        if (current.left != null) {
          queue.offer(current.left);
        }

        if (current.right != null) {
          queue.offer(current.right);
        }
      }
    }

    return root;
  }
}
