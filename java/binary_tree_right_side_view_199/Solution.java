package binary_tree_right_side_view_199;

import libraries.tree.binary_tree.TreeNode;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

class Solution {
//  public List<Integer> rightSideView(TreeNode root) {
//    List<List<Integer>> levelOrder = new ArrayList<>();
//    getLevelOrder(root, 0, levelOrder);
//
//    List<Integer> result = new ArrayList<>();
//    levelOrder.forEach(val -> result.add(val.get(0)));
//    return result;
//  }
//
//  private static void getLevelOrder(TreeNode root, int level, List<List<Integer>> result) {
//    if (root == null) {
//      return;
//    }
//
//    if (result.size() <= level) {
//      result.add(new ArrayList<>());
//    }
//
//    result.get(level).add(root.val);
//
//    getLevelOrder(root.right, level + 1, result);
//    getLevelOrder(root.left, level + 1, result);
//  }

  public List<Integer> rightSideView(TreeNode root) {
    List<Integer> result = new ArrayList<>();

    if (root == null) {
      return result;
    }

    Queue<TreeNode> queue = new LinkedList<>();
    queue.add(root);

    while (!queue.isEmpty()) {
      int n = queue.size();
      for (int i = 0; i < n; i++) {
        TreeNode current = queue.poll();

        if (i == 0) {
          result.add(current.val);
        }

        if (current.right != null) {
          queue.add(current.right);
        }

        if (current.left != null) {
          queue.add(current.left);
        }
      }
    }

    return result;
  }
}
