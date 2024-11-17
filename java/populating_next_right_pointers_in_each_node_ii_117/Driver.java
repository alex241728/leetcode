package populating_next_right_pointers_in_each_node_ii_117;

import tree.level_connected_tree.Node;

import static tree.level_connected_tree.TreeTraversal.printLevelOrder;

class Driver {
  public static void main(String[] args) {
    Solution s = new Solution();

    Node root;

    /*
       Input: root = [1,2,3,4,5,null,7]
       Output: [1,#,2,3,#,4,5,7,#]
       Explanation: Given the above binary tree (Figure A), your function should populate
       each next pointer to point to its next right node,just like in Figure B. The serialized
       output is in level order as connected by the next pointers, with '#' signifying the end
       of each level.
    */
    root =
        new Node(
            1,
            new Node(2, new Node(4), new Node(5), null),
            new Node(3, null, new Node(7), null),
            null);
    printLevelOrder(s.connect(root));
    System.out.println();

    /*
     Input: root = []
     Output: []
    */
    printLevelOrder(s.connect(null));
    System.out.println();
  }
}
