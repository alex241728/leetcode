package binary_tree_level_order_traversal_102;

import libraries.tree.binary_tree.TreeNode;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

class Solution {
  public List<List<Integer>> levelOrder(TreeNode root) {
    List<List<Integer>> levels = new ArrayList<>();

    if (root == null) {
      return levels;
    }

    Queue<TreeNode> queue = new LinkedList<>();
    queue.add(root);

    while (!queue.isEmpty()) {
      int n = queue.size();
      List<Integer> level = new ArrayList<>();

      for (int i = 0; i < n; i++) {
        TreeNode current = queue.poll();
        level.add(current.val);

        if (current.left != null) {
          queue.add(current.left);
        }

        if (current.right != null) {
          queue.add(current.right);
        }
      }

      levels.add(level);
    }

    return levels;
  }
}
