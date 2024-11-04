public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: s = "babad"
         * Output: "bab"
         * Explanation: "aba" is also a valid answer.
         */
        System.out.println(s.longestPalindrome("babad"));

        /*
         * Input: s = "cbbd"
         * Output: "bb"
         */
        System.out.println(s.longestPalindrome("cbbd"));
    }
}