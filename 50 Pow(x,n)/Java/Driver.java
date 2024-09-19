public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: x = 2.00000, n = 10
         * Output: 1024.00000
         */
        System.out.println(s.myPow(2.00000, 10));

        /*
         * Input: x = 2.10000, n = 3
         * Output: 9.26100
         */
        System.out.println(s.myPow(2.10000, 3));

        /*
         * Input: x = 2.00000, n = -2
         * Output: 0.25000
         * Explanation: 2-2 = 1/22 = 1/4 = 0.25
         */
        System.out.println(s.myPow(2.00000, -2));
    }
}
