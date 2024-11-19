package max_depth_of_binary_tree_104;

import tree.binary_tree.TreeNode;

class Solution {
  public int maxDepth(TreeNode root) {
    if (root == null) {
      return 0;
    }

    return Math.max(maxDepth(root.left), maxDepth(root.right)) + 1;
  }
}
