package construct_binary_tree_from_preorder_and_inorder_traversal_105;

import libraries.tree.binary_tree.TreeNode;

import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.Queue;

class Solution {
  public TreeNode buildTree(int[] preorder, int[] inorder) {
    Queue<Integer> preorderQueue = new ArrayDeque<>();
    for (int num : preorder) {
      preorderQueue.add(num);
    }

    return build(preorderQueue, inorder);
  }

  private TreeNode build(Queue<Integer> preorder, int[] inorder) {
    if (inorder.length == 0) {
      return null;
    }

    int num = preorder.poll();
    int index = indexOf(inorder, num);
    TreeNode root = new TreeNode(num);

    root.left = build(preorder, Arrays.copyOfRange(inorder, 0, index));
    root.right = build(preorder, Arrays.copyOfRange(inorder, index + 1, inorder.length));

    return root;
  }

  private static int indexOf(int[] array, int target) {
    for (int i = 0; i < array.length; i++) {
      if (array[i] == target) {
        return i;
      }
    }
    return -1;
  }
}
