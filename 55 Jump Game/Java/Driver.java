public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: nums = [2,3,1,1,4]
         * Output: true
         * Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
         */
        System.out.println(s.canJump(new int[]{2, 3, 1, 1, 4}));

        /*
         * Input: nums = [3,2,1,0,4]
         * Output: false
         * Explanation: You will always arrive at index 3 no matter what. 
         *              Its maximum jump length is 0, which makes it impossible to reach the last index.
         */
        System.out.println(s.canJump(new int[]{3, 2, 1, 0, 4}));
    }
}
