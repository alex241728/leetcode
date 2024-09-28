public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: nums = [1,1,2]
         * Output:
         * [[1,1,2],
         *  [1,2,1],
         *  [2,1,1]]
         */
        System.out.println(s.permuteUnique(new int[]{1,1,2}));

        /*
         * Input: nums = [1,2,3]
         * Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
         */
        System.out.println(s.permuteUnique(new int[]{1,2,3}));
    }
}
