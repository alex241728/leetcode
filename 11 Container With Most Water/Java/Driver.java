public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: height = [1,8,6,2,5,4,8,3,7]
         * Output: 49
         * Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
         *              In this case, the max area of water (blue section) the container can contain is 49.
         */
        System.out.println(s.maxArea(new int[]{1,8,6,2,5,4,8,3,7}));

        /*
         * Input: height = [1,1]
         * Output: 1
         */
        System.out.println(s.maxArea(new int[]{1,1}));
    }
}
