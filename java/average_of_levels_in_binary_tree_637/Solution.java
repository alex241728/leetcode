package average_of_levels_in_binary_tree_637;

import libraries.tree.binary_tree.TreeNode;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

class Solution {
  public List<Double> averageOfLevels(TreeNode root) {
    List<Double> averages = new ArrayList<>();

    if (root == null) {
      return averages;
    }

    Queue<TreeNode> queue = new LinkedList<>();
    queue.add(root);

    while (!queue.isEmpty()) {
      int n = queue.size();
      double sum = 0;

      for (int i = 0; i < n; i++) {
        TreeNode current = queue.poll();
        sum += current.val;

        if (current.left != null) {
          queue.add(current.left);
        }

        if (current.right != null) {
          queue.add(current.right);
        }
      }

      averages.add(sum / n);
    }

    return averages;
  }
}
