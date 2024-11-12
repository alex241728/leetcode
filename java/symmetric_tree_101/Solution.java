package symmetric_tree_101;

import tree.binary_tree.TreeNode;

public class Solution {
  public boolean isSymmetric(TreeNode root) {
    if (root == null) {
      return true;
    }

    return isMirror(root.left, root.right);
  }

  private static boolean isMirror(TreeNode left, TreeNode right) {
    if (left == null && right == null) {
      return true;
    } else if (left == null || right == null) {
      return false;
    }

    return isMirror(left.left, right.right)
        && isMirror(left.right, right.left)
        && left.val == right.val;
  }
}
