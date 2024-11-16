package flatten_binary_tree_to_linked_list_114;

import tree.binary_tree.TreeNode;

class IterativeSolution {
  public void flatten(TreeNode root) {
    while (root != null) {
      if (root.left != null) {
        TreeNode successor = findSuccessor(root);
        successor.right = root.right;

        root.right = root.left;
        root.left = null;
      }
      root = root.right;
    }
  }

  private static TreeNode findSuccessor(TreeNode root) {
    root = root.left;
    while (root.right != null) {
      root = root.right;
    }
    return root;
  }
}
