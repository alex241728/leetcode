package sum_root_to_leaf_numbers_129;

import libraries.tree.binary_tree.TreeNode;

class Solution {
  public int sumNumbers(TreeNode root) {
    return sum(root, 0);
  }

  private static int sum(TreeNode root, int currentSum) {
    if (root == null) {
      return 0;
    }

    currentSum = currentSum * 10 + root.val;

    if (root.left == null && root.right == null) {
      return currentSum;
    }

    return sum(root.left, currentSum) + sum(root.right, currentSum);
  }
}
