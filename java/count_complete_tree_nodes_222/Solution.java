package count_complete_tree_nodes_222;

import libraries.tree.binary_tree.TreeNode;

class Solution {
  public int countNodes(TreeNode root) {
    if (root == null) {
      return 0;
    }

    return 1 + countNodes(root.left) + countNodes(root.right);
  }
}
