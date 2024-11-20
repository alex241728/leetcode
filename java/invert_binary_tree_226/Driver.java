package invert_binary_tree_226;

import libraries.tree.binary_tree.TreeNode;

import static libraries.tree.binary_tree.TreeNode.printLevelOrder;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    /*
     * Input: root = [4,2,7,1,3,6,9]
     * Output: [4,7,2,9,6,3,1]
     */
    root =
        new TreeNode(
            4,
            new TreeNode(2, new TreeNode(1), new TreeNode(3)),
            new TreeNode(7, new TreeNode(6), new TreeNode(9)));
    printLevelOrder(s.invertTree(root));
    System.out.println();

    /*
     * Input: root = [2,1,3]
     * Output: [2,3,1]
     */
    root = new TreeNode(2, new TreeNode(1), new TreeNode(3));
    printLevelOrder(s.invertTree(root));
    System.out.println();

    /*
     * Input: root = []
     * Output: []
     */
    printLevelOrder(s.invertTree(null));
    System.out.println();
  }
}
