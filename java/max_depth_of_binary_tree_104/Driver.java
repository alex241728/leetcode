package max_depth_of_binary_tree_104;

import libraries.tree.binary_tree.TreeNode;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    /*
      Input: root = [3,9,20,null,null,15,7]
      Output: 3
    */
    root = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
    System.out.println(s.maxDepth(root));

    /*
      Input: root = [1,null,2]
      Output: 2
    */
    root = new TreeNode(1, null, new TreeNode(2));
    System.out.println(s.maxDepth(root));
  }
}
