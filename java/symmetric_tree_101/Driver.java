package symmetric_tree_101;

import tree.binary_tree.TreeNode;

public class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    /*
      Input: root = [1,2,2,3,4,4,3]
      Output: true
    */
    root =
        new TreeNode(
            1,
            new TreeNode(2, new TreeNode(3), new TreeNode(4)),
            new TreeNode(2, new TreeNode(4), new TreeNode(3)));
    System.out.println(s.isSymmetric(root));

    /*
      Input: root = [1,2,2,null,3,null,3]
      Output: false
    */
    root =
        new TreeNode(
            1, new TreeNode(2, null, new TreeNode(3)), new TreeNode(2, null, new TreeNode(3)));
    System.out.println(s.isSymmetric(root));
  }
}
