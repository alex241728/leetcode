public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        TreeNode p = null;
        TreeNode q = null;

        /*
         * Input: p = [1,2,3], q = [1,2,3]
         * Output: true
         */
        p = new TreeNode(1, new TreeNode(2), new TreeNode(3));
        q = new TreeNode(1, new TreeNode(2), new TreeNode(3));
        System.out.println(s.isSameTree(p, q));

        /*
         * Input: p = [1,2], q = [1,null,2]
         * Output: false
         */
        p = new TreeNode(1, new TreeNode(2), null);
        q = new TreeNode(1, null, new TreeNode(2));
        System.out.println(s.isSameTree(p, q));

        /*
         * Input: p = [1,2,1], q = [1,1,2]
         * Output: false
         */
        p = new TreeNode(1, new TreeNode(2), new TreeNode(1));
        q = new TreeNode(1, new TreeNode(1), new TreeNode(2));
        System.out.println(s.isSameTree(p, q));
    }
}
