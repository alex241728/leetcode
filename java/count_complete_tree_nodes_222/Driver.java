package count_complete_tree_nodes_222;

import libraries.tree.binary_tree.TreeNode;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    /*
       Input: root = [1,2,3,4,5,6]
       Output: 6
    */
    root =
        new TreeNode(
            1,
            new TreeNode(2, new TreeNode(4), new TreeNode(5)),
            new TreeNode(3, new TreeNode(6), null));
    System.out.println(s.countNodes(root));

    /*
       Input: root = []
       Output: 0
    */
    System.out.println(s.countNodes(null));

    /*
       Input: root = [1]
       Output: 1
    */
    root = new TreeNode(1);
    System.out.println(s.countNodes(root));
  }
}
