package construct_binary_tree_from_preorder_and_inorder_traversal_105;

import static tree.binary_tree.TreeTraversal.printLevelOrder;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    /*
       Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
       Output: [3,9,20,null,null,15,7]
    */
    printLevelOrder(s.buildTree(new int[] {3, 9, 20, 15, 7}, new int[] {9, 3, 15, 20, 7}));
    System.out.println();

    /*
       Input: preorder = [-1], inorder = [-1]
       Output: [-1]
    */
    printLevelOrder(s.buildTree(new int[] {-1}, new int[] {-1}));
    System.out.println();
  }
}
