public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: nums = [3,2,3]
         * Output: 3
         */
        System.out.println(s.majorityElement(new int[]{3, 2, 3}));

        /*
         * Input: nums = [2,2,1,1,1,2,2]
         * Output: 2
         */
        System.out.println(s.majorityElement(new int[]{2, 2, 1, 1, 1, 2, 2}));
    }
}