package path_sum_112;

import tree.binary_tree.TreeNode;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    TreeNode root;

    /*
       Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
       Output: true
       Explanation: The root-to-leaf path with the target sum is shown.
    */
    root =
        new TreeNode(
            5,
            new TreeNode(4, new TreeNode(11, new TreeNode(7), new TreeNode(2)), null),
            new TreeNode(8, new TreeNode(13), new TreeNode(4, null, new TreeNode(1))));
    System.out.println(s.hasPathSum(root, 22));

    /*
     Input: root = [1,2,3], targetSum = 5
     Output: false
     Explanation: There are two root-to-leaf paths in the tree:
     (1 --> 2): The sum is 3.
     (1 --> 3): The sum is 4.
     There is no root-to-leaf path with sum = 5.
    */
    root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    System.out.println(s.hasPathSum(root, 5));

    /*
     Input: root = [], targetSum = 0
     Output: false
     Explanation: Since the tree is empty, there are no root-to-leaf paths.
    */
    System.out.println(s.hasPathSum(null, 0));
  }
}
