package sum_root_to_leaf_numbers_129;

import libraries.tree.binary_tree.TreeNode;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    /*
       Input: root = [1,2,3]
       Output: 25
       Explanation:
       The root-to-leaf path 1->2 represents the number 12.
       The root-to-leaf path 1->3 represents the number 13.
       Therefore, sum = 12 + 13 = 25.
    */
    root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    System.out.println(s.sumNumbers(root));

    /*
       Input: root = [4,9,0,5,1]
       Output: 1026
       Explanation:
       The root-to-leaf path 4->9->5 represents the number 495.
       The root-to-leaf path 4->9->1 represents the number 491.
       The root-to-leaf path 4->0 represents the number 40.
       Therefore, sum = 495 + 491 + 40 = 1026.
    */
    root = new TreeNode(4, new TreeNode(9, new TreeNode(5), new TreeNode(1)), new TreeNode(0));
    System.out.println(s.sumNumbers(root));
  }
}
