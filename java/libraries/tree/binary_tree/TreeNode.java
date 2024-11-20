package libraries.tree.binary_tree;

import java.util.LinkedList;
import java.util.Queue;

public class TreeNode {
  public int val;
  public TreeNode left;
  public TreeNode right;

  public TreeNode(int val) {
    this.val = val;
  }

  public TreeNode(int val, TreeNode left, TreeNode right) {
    this.val = val;
    this.left = left;
    this.right = right;
  }

  public static void printInOrder(TreeNode root) {
    if (root == null) {
      return;
    }

    printInOrder(root.left);

    System.out.println(root.val + " ");

    printInOrder(root.right);
  }

  public static void printPreOrder(TreeNode root) {
    if (root == null) {
      return;
    }

    System.out.println(root.val + " ");

    printPreOrder(root.left);

    printPreOrder(root.right);
  }

  public static void printPostOrder(TreeNode root) {
    if (root == null) {
      return;
    }

    printPostOrder(root.left);

    printPostOrder(root.right);

    System.out.println(root.val + " ");
  }

  public static void printLevelOrder(TreeNode root) {
    if (root == null) {
      return;
    }

    Queue<TreeNode> q = new LinkedList<>();
    q.add(root);

    while (!q.isEmpty()) {
      TreeNode current = q.poll();
      System.out.print(current.val + " ");

      if (current.left != null) {
        q.add(current.left);
      }

      if (current.right != null) {
        q.add(current.right);
      }
    }
  }
}
