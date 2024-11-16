package flatten_binary_tree_to_linked_list_114;

import tree.binary_tree.TreeNode;

class RecursiveSolution {
  private TreeNode prev = null;

  public void flatten(TreeNode root) {
    this.prev = null;
    makeFlat(root);
  }

  private void makeFlat(TreeNode root) {
    if (root == null) {
      return;
    }

    makeFlat(root.right);
    makeFlat(root.left);

    root.right = prev;
    root.left = null;
    prev = root;
  }
}
