package average_of_levels_in_binary_tree_637;

import libraries.tree.binary_tree.TreeNode;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    /*
     Input: root = [3,9,20,null,null,15,7]
     Output: [3.00000,14.50000,11.00000]
     Explanation: The average value of nodes on level 0 is 3, on level 1 is 14.5, and on level 2 is 11.
     Hence return [3, 14.5, 11].
    */
    root = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
    System.out.println(s.averageOfLevels(root));

    /*
     Input: root = [3,9,20,15,7]
     Output: [3.00000,14.50000,11.00000]
    */
    root = new TreeNode(3, new TreeNode(9, new TreeNode(15), new TreeNode(7)), new TreeNode(20));
    System.out.println(s.averageOfLevels(root));
  }
}
