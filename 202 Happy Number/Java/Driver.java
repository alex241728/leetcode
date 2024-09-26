public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: n = 19
         * Output: true
         * Explanation:
         * 12 + 92 = 82
         * 82 + 22 = 68
         * 62 + 82 = 100
         * 12 + 02 + 02 = 1
         */
        System.out.println(s.isHappy(19));

        /*
         * Input: n = 2
         * Output: false
         */
        System.out.println(s.isHappy(2));
    }
}