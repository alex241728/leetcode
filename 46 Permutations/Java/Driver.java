public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: nums = [1,2,3]
         * Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
         */
        System.out.println(s.permute(new int[]{1,2,3}));

        /*
         * Input: nums = [0,1]
         * Output: [[0,1],[1,0]]
         */
        System.out.println(s.permute(new int[]{0,1}));

        /*
         * Input: nums = [1]
         * Output: [[1]]
         */
        System.out.println(s.permute(new int[]{1}));
    }
}
