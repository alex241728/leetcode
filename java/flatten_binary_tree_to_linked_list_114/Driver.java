package flatten_binary_tree_to_linked_list_114;

import tree.binary_tree.TreeNode;

import static tree.binary_tree.TreeTraversal.printLevelOrder;

class Driver {
  public static void main(String[] args) {
    IterativeSolution is = new IterativeSolution();
    RecursiveSolution rs = new RecursiveSolution();

    TreeNode root;

    /*
      Input: root = [1,2,5,3,4,null,6]
      Output: [1,null,2,null,3,null,4,null,5,null,6]
    */
    root =
        new TreeNode(
            1,
            new TreeNode(2, new TreeNode(3), new TreeNode(4)),
            new TreeNode(5, null, new TreeNode(6)));
    is.flatten(root);
    printLevelOrder(root);
    System.out.println();

    root =
        new TreeNode(
            1,
            new TreeNode(2, new TreeNode(3), new TreeNode(4)),
            new TreeNode(5, null, new TreeNode(6)));
    rs.flatten(root);
    printLevelOrder(root);
    System.out.println('\n');

    /*
      Input: root = []
      Output: []
    */
    root = null;
    is.flatten(root);
    printLevelOrder(root);
    System.out.println();

    root = null;
    rs.flatten(root);
    printLevelOrder(root);
    System.out.println('\n');

    /*
      Input: root = [0]
      Output: [0]
    */
    root = new TreeNode(0);
    is.flatten(root);
    printLevelOrder(root);
    System.out.println();

    root = new TreeNode(0);
    rs.flatten(root);
    printLevelOrder(root);
    System.out.println();
  }
}
