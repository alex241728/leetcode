package construct_binary_tree_from_inorder_and_postorder_traversal_106;

import tree.binary_tree.TreeNode;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
  public TreeNode buildTree(int[] inorder, int[] postorder) {
    List<Integer> postorderList = new ArrayList<>();
    for (int num : postorder) {
      postorderList.add(num);
    }

    return build(inorder, postorderList);
  }

  private static TreeNode build(int[] inorder, List<Integer> postorderList) {
    if (inorder.length == 0) {
      return null;
    }

    int num = postorderList.removeLast();
    int index = indexOf(inorder, num);

    TreeNode root = new TreeNode(num);
    root.right = build(Arrays.copyOfRange(inorder, index + 1, inorder.length), postorderList);
    root.left = build(Arrays.copyOfRange(inorder, 0, index), postorderList);

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
