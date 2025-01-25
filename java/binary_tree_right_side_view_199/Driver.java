package binary_tree_right_side_view_199;

import libraries.tree.binary_tree.TreeNode;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    root =
        new TreeNode(
            1, new TreeNode(2, null, new TreeNode(5)), new TreeNode(3, null, new TreeNode(4)));
    System.out.println(s.rightSideView(root));

    root =
        new TreeNode(
            1, new TreeNode(2, new TreeNode(4, new TreeNode(5), null), null), new TreeNode(3));
    System.out.println(s.rightSideView(root));

    root = new TreeNode(1, null, new TreeNode(3));
    System.out.println(s.rightSideView(root));

    System.out.println(s.rightSideView(null));
  }
}
