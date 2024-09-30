public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: x = 121
         * Output: true
         * Explanation: 121 reads as 121 from left to right and from right to left.
         */
        System.out.println(s.isPalindrome(121));

        /*
         * Input: x = -121
         * Output: false
         * Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
         */
        System.out.println(s.isPalindrome(-121));

        /*
         * Input: x = 10
         * Output: false
         * Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
         */
        System.out.println(s.isPalindrome(10));
    }
}
