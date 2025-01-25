package binary_tree_level_order_traversal_102;

import libraries.tree.binary_tree.TreeNode;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    /*
     Input: root = [3,9,20,null,null,15,7]
     Output: [[3],[9,20],[15,7]]
    */
    root = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
    System.out.println(s.levelOrder(root));

    /*
      Input: root = [1]
      Output: [[1]]
     */
    root = new TreeNode(1);
    System.out.println(s.levelOrder(root));

    /*
      Input: root = []
      Output: []
     */
    System.out.println(s.levelOrder(null));
  }
}
