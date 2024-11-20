package invert_binary_tree_226;

import libraries.tree.binary_tree.TreeNode;

class Solution {
  public TreeNode invertTree(TreeNode root) {
    if (root == null) {
      return root;
    }

    invertTree(root.left);
    invertTree(root.right);

    TreeNode left = root.left;
    root.left = root.right;
    root.right = left;

    return root;
  }
}
