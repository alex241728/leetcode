package construct_binary_tree_from_inorder_and_postorder_traversal_106;

import static tree.binary_tree.TreeTraversal.printLevelOrder;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    /*
       Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
       Output: [3,9,20,null,null,15,7]
    */
    printLevelOrder(s.buildTree(new int[] {9, 3, 15, 20, 7}, new int[] {9, 15, 7, 20, 3}));
    System.out.println();

    /*
       Input: inorder = [-1], postorder = [-1]
       Output: [-1]
    */
    printLevelOrder(s.buildTree(new int[] {-1}, new int[] {-1}));
    System.out.println();
  }
}
